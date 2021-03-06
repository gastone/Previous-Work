#! /usr/bin/python


'''
Entry into the Solutions In Perception Challenge, 2011
University at Buffalo - Team Franklin
Authors: Colin Lea, Julian Ryde, Nick Hillier, Jason Corso
Contact: colincsl@gmail.com

This file is used as a shell to interface with the detector code. It reads a rosbag file, does detection and pose estimation, visualizes the output, and writes object and pose information to a CSV file.

General form to run:
rosrun mrol_sip detector.py -B <BAGFILE_NAME>.bag -C <USER_DEFINED_CONFIG_FILE>.yaml --image <IMAGE_TOPIC> --camera_info <CAMERA_INFO_TOPIC> --points <POINT_CLOUD2_TOPIC> --team_name <TEAM_NAME> --run_number <RUN_ID>

1) NIST training
Example command to run
rosrun mrol_sip detector.py -B ~/tod_stub_dev/tod_stub/bin/obj16.bag -C config.yaml --image image --camera_info camera_info --points points2 --team_name teamFranklin --run_number 0 --viz_on 0

2) NIST test
rosrun mrol_sip detector.py -B ~/tod_stub_dev/tod_stub/bin/obj16test.bag -C config.yaml --image camera/rgb/image_color --camera_info camera/rgb/camera_info --points /camera/rgb/points --team_name teamFranklin --run_number 0 --viz_on 0

3) Object training
rosrun mrol_sip detector.py -B ~/sip_data/training_new/object_01.bag -C config.yaml --image image_color --camera_info camera_info --points points --team_name teamFranklin --run_number 0 --viz_on 0

'''

import roslib
roslib.load_manifest('mrol_sip')
import rospy
import cv
import sys
from sensor_msgs.msg import LaserScan
from sensor_msgs.msg import PointCloud2
from sensor_msgs.msg import PointField
import tf
import rosbag

#MROL
import mrol_mapping.mapper as mapper
import mrol_mapping.mrol as mrol
import mrol_mapping.poseutil as poseutil
import mrol_mapping.pointcloud as pointcloud

from detectionObjectFinder import *
from detectionClassifier import *
from detectionPoseEstimation import *

from rosbag_to_3d_model import bag2model
import numpy as np
import write_csv
import time
import pdb

import cProfile


#pub_img = rospy.Publisher('img_out', Image)



if __name__ == "__main__":
	init_time = time.time()
	#defaults:
	bagName = []
	configName = 'config.yaml'
	imageTopic = 'image'
	pcTopic = 'points2'
	cameraInfo = []
	teamName = 'teamFranklin'
	runNumber = 0
	viz = 1
	
	frame = 0
	current_dir = sys.argv[0]
	
	# mrol defaults
	mrol_res = 0.002
	mrol_levels = 4

	
	# Read input arguments
	if len(sys.argv)>1:
		for i in range(1,len(sys.argv), 2):
			print sys.argv[i], sys.argv[i+1]
			if sys.argv[i] == '-B':
				bagName = sys.argv[i+1]
			elif sys.argv[i] == '-C':
				configName = sys.argv[i+1]
			elif sys.argv[i] == '--image':
				imageTopic = sys.argv[i+1]
			elif sys.argv[i] == '--camera_info':
				cameraInfo = sys.argv[i+1]
			elif sys.argv[i] == '--points':
				pcTopic = sys.argv[i+1]
			elif sys.argv[i] == '--team_name':
				teamName = sys.argv[i+1]
			elif sys.argv[i] == '--run_number':
				runNumber = sys.argv[i+1]
			elif sys.argv[i] == '--viz_on':
				viz = int(sys.argv[i+1])
			else:
				print "Error in input arguments"
				

	# Initialize CSV file
	time_ = time.gmtime()
	saveDir = current_dir[0:current_dir.rfind('/')] + '/data/'
	outputName = 'RUN'+ '%04i' %int(runNumber) + "_" + teamName + "_" +  '%4i%02i%02i' %(time_[0], time_[1], time_[2]) +"_" + '%02i'%time_[3] + ':' + '%02i'%time_[5] +':'+ '%02i'%time_[6] + '.csv'
	print saveDir+outputName
	output = write_csv.write2csv(saveDir+outputName, runNumber)

	#Initialize classifier and pose estimator (This preloads all object features)	
	classifier = Classifier()
	objectNames = np.array(classifier.get_names())
	potential_names = []
	
	poseEstimator = PoseEstimator()
	
#	print 'Visualization = %i' %viz
	if viz:
		cv.NamedWindow("Detector", flags=cv.CV_WINDOW_NORMAL)		

	print '---------------------------'
	print '-----Done Initializing-----'
	print '---------------------------'
	print 'Init time:',time.time()-init_time
	print '---------------------------'	

	# Look through data
	if bagName == []:
		print "Error: No bag name"
	else:
		bag = bag2model(bagName)
		
		# Get Camera info once
		if cameraInfo != []:
			msg_camera = bag.bag.read_messages(topics=cameraInfo)
			bag.camera_info(msg_camera)

		msg_cloud = bag.bag.read_messages(topics=pcTopic)
		
#		pdb.set_trace()
		# Get all pointsclouds from the image 
		try:
			pass
		except:
			if frame > 2:
				print 'End of file'
			else:
				print 'Error getting data'		
				
		frame_rate = 1
		try:
			while 1:#frame < 10:
				oID = 0 #initialize zero objects in the scene
	
				for i in range(frame_rate):
					pts_pos, pts_color, msg_cloud, ros_time, frame_new = bag.next_depth(msg_cloud)
					frame = frame_new
#					frame+=1
			
				time_ = time.gmtime()
				time_out = '%02i.%02i.%02i.%03i' %(time_[3], time_[4], time_[5], abs(ros_time.to_sec()-round(ros_time.to_sec()))*1000)
				print 'Frame: ', frame
	
				pc = np.array([pts_pos.T, pts_color]) # Nx6 pointcloud
				im_pos = np.reshape(pts_pos.T, (480, 640, -1))

				### Find object(s)
				finder = ObjectFinder(pc)
		#			cProfile.run('pc, im = finder.run(min_=.6, max_=.9)', '/home/colin/profile_object')
				pdb.set_trace()
				pc, im = finder.run(min_=.5, max_=1.0)
		
				if viz:
					cv.ShowImage("Detector", im/np.max(np.max(im)))
					key = cv.waitKey(33)


				### Texture detection
		#			cProfile.run('classScores = classifier.run(im)', '/home/colin/profile_classifier')
				classScores, locs = classifier.run(im)
		
				dID_ind = np.argmax(classScores)
				dID_score= classScores[dID_ind]
				dID = objectNames[dID_ind]
				
				print "Objects in order"
				
				dID_ind_nonzero = np.nonzero(classScores>0)[0]
				dID_scores_nz = classScores[dID_ind_nonzero]
				dID_names_nz = objectNames[dID_ind_nonzero]
				dID_ind_nzSort = np.argsort(dID_scores_nz)
				
				dID_name_nzSort = dID_names_nz[dID_ind_nzSort]
				dID_score_nzSort = dID_scores_nz[dID_ind_nzSort]				
				print dID_name_nzSort
				print dID_score_nzSort
#				print objectNames[np.argsort(-classScores[np.nonzero(classScores>0)[0]])]
#				print np.argsort(-classScores)
#				print classScores[np.argsort(-classScores[np.nonzero(classScores>0)[0]])]
		#			oID += 1
#				print dID
#				print '1Likelihood:', classScores[dID_ind]

				dID_inds = np.nonzero(classScores > .7*dID_score)[0]
				dIDs = objectNames[dID_inds]
				oID += len(dIDs)
				print 'Objects: ', dIDs
#				print 'Likelihood:', classScores[dID_inds]
#				print classScores
			
					
					
				for i in range(len(dIDs)):
					try:
						# Get pose from sift locations
						im_pts = locs[dID_inds[i]]
						pose_pts = im_pos[im_pts[:,1], im_pts[:,0], :]
						pose_centroid = np.mean(pose_pts[np.nonzero(pose_pts>0)[0]], axis=0)
		
						### Pose Estimation
						potential_names = [dIDs[i]]
		#				potential_names.append(dIDs[i])							
						scores, poses = poseEstimator.run(pc, pose_centroid, potential_names)
			#			scores = 0
			#			poses = np.array([[0,0,0,0,0,0]])
		
						bestPose = poses[0]
			#			print bestPose
			#			pdb.set_trace()	
			#			bestPose = poses[np.argmin(scores)]
		
						if bestPose != []:
							T = bestPose[0:3]
							p = poseutil.Pose3D()
							p.set(bestPose)
							R = p.getMatrix()[0:3, 0:3]
					except:
						print "Error getting pose for ", dIDs[i]
						poses = np.array([[0,0,0,0,0,0]])
						T = bestPose[0:3]
						p = poseutil.Pose3D()
						p.set(bestPose)
						R = p.getMatrix()[0:3, 0:3]
						
					# data is a dictionary with elements time, frame, dID, oID, R (3x3), T (3x1)
					data = {'time':time_out,'frame': frame, 'oID':oID, 'dID':dIDs[i], 'R':R, 'T':T}
					output.write_data(data)					
					
					
					
				#Visualize
				if 0:#viz:
					pc = pointcloud.PointCloud(pts_pos.T)
					P =  poseutil.Pose3D()
					P.set((0,0,0,0,0,0))		
					print 'Adding new points for visualization...'
		#			pc.set(P)
					vmap.add_points(pc, P)
	
	#			frame+=1
				print 'Time per frame: ', np.mod(time.gmtime()[5]-time_[5], 60)
		except:
#			pdb.set_trace()
			print "Error in detector?"
			
	print "Previous file: ",saveDir+outputName
#		img_pos, img_color = bag.pts2img(pts_pos, pts_color)
	
		
		

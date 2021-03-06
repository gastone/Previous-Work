/*
 * Gravity_Well.h
 *
 * Real-Time Workshop code generation for Simulink model "Gravity_Well.mdl".
 *
 * Model Version              : 1.201
 * Real-Time Workshop version : 7.0  (R2007b)  02-Aug-2007
 * C source code generated on : Tue Jul 21 14:08:06 2009
 */
#ifndef RTW_HEADER_Gravity_Well_h_
#define RTW_HEADER_Gravity_Well_h_
#ifndef Gravity_Well_COMMON_INCLUDES_
# define Gravity_Well_COMMON_INCLUDES_
#include <stdlib.h>
#include <math.h>
#include <stddef.h>
#include <string.h>
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "dt_info.h"
#include "ext_work.h"
#include "hil.h"
#include "quanser_messages.h"
#include "quanser_extern.h"
#include "rt_nonfinite.h"
#include "rtlibsrc.h"
#endif                                 /* Gravity_Well_COMMON_INCLUDES_ */

#include "Gravity_Well_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetBlkStateChangeFlag
# define rtmGetBlkStateChangeFlag(rtm) ((rtm)->ModelData.blkStateChange)
#endif

#ifndef rtmSetBlkStateChangeFlag
# define rtmSetBlkStateChangeFlag(rtm, val) ((rtm)->ModelData.blkStateChange = (val))
#endif

#ifndef rtmGetBlockIO
# define rtmGetBlockIO(rtm)            ((rtm)->ModelData.blockIO)
#endif

#ifndef rtmSetBlockIO
# define rtmSetBlockIO(rtm, val)       ((rtm)->ModelData.blockIO = (val))
#endif

#ifndef rtmGetChecksums
# define rtmGetChecksums(rtm)          ((rtm)->Sizes.checksums)
#endif

#ifndef rtmSetChecksums
# define rtmSetChecksums(rtm, val)     ((rtm)->Sizes.checksums = (val))
#endif

#ifndef rtmGetConstBlockIO
# define rtmGetConstBlockIO(rtm)       ((rtm)->ModelData.constBlockIO)
#endif

#ifndef rtmSetConstBlockIO
# define rtmSetConstBlockIO(rtm, val)  ((rtm)->ModelData.constBlockIO = (val))
#endif

#ifndef rtmGetContStateDisabled
# define rtmGetContStateDisabled(rtm)  ((rtm)->ModelData.contStateDisabled)
#endif

#ifndef rtmSetContStateDisabled
# define rtmSetContStateDisabled(rtm, val) ((rtm)->ModelData.contStateDisabled = (val))
#endif

#ifndef rtmGetContStates
# define rtmGetContStates(rtm)         ((rtm)->ModelData.contStates)
#endif

#ifndef rtmSetContStates
# define rtmSetContStates(rtm, val)    ((rtm)->ModelData.contStates = (val))
#endif

#ifndef rtmGetDataMapInfo
# define rtmGetDataMapInfo(rtm)        ((rtm)->DataMapInfo)
#endif

#ifndef rtmSetDataMapInfo
# define rtmSetDataMapInfo(rtm, val)   ((rtm)->DataMapInfo = (val))
#endif

#ifndef rtmGetDefaultParam
# define rtmGetDefaultParam(rtm)       ((rtm)->ModelData.defaultParam)
#endif

#ifndef rtmSetDefaultParam
# define rtmSetDefaultParam(rtm, val)  ((rtm)->ModelData.defaultParam = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
# define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->ModelData.derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
# define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->ModelData.derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetDirectFeedThrough
# define rtmGetDirectFeedThrough(rtm)  ((rtm)->Sizes.sysDirFeedThru)
#endif

#ifndef rtmSetDirectFeedThrough
# define rtmSetDirectFeedThrough(rtm, val) ((rtm)->Sizes.sysDirFeedThru = (val))
#endif

#ifndef rtmGetErrorStatusFlag
# define rtmGetErrorStatusFlag(rtm)    ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatusFlag
# define rtmSetErrorStatusFlag(rtm, val) ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetFinalTime
# define rtmSetFinalTime(rtm, val)     ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetFirstInitCondFlag
# define rtmGetFirstInitCondFlag(rtm)  ((rtm)->Timing.firstInitCondFlag)
#endif

#ifndef rtmSetFirstInitCondFlag
# define rtmSetFirstInitCondFlag(rtm, val) ((rtm)->Timing.firstInitCondFlag = (val))
#endif

#ifndef rtmGetIntgData
# define rtmGetIntgData(rtm)           ((rtm)->ModelData.intgData)
#endif

#ifndef rtmSetIntgData
# define rtmSetIntgData(rtm, val)      ((rtm)->ModelData.intgData = (val))
#endif

#ifndef rtmGetMdlRefGlobalTID
# define rtmGetMdlRefGlobalTID(rtm)    ((rtm)->Timing.mdlref_GlobalTID)
#endif

#ifndef rtmSetMdlRefGlobalTID
# define rtmSetMdlRefGlobalTID(rtm, val) ((rtm)->Timing.mdlref_GlobalTID = (val))
#endif

#ifndef rtmGetMdlRefTriggerTID
# define rtmGetMdlRefTriggerTID(rtm)   ((rtm)->Timing.mdlref_TriggerTID)
#endif

#ifndef rtmSetMdlRefTriggerTID
# define rtmSetMdlRefTriggerTID(rtm, val) ((rtm)->Timing.mdlref_TriggerTID = (val))
#endif

#ifndef rtmGetModelMappingInfo
# define rtmGetModelMappingInfo(rtm)   ((rtm)->SpecialInfo.mappingInfo)
#endif

#ifndef rtmSetModelMappingInfo
# define rtmSetModelMappingInfo(rtm, val) ((rtm)->SpecialInfo.mappingInfo = (val))
#endif

#ifndef rtmGetModelName
# define rtmGetModelName(rtm)          ((rtm)->modelName)
#endif

#ifndef rtmSetModelName
# define rtmSetModelName(rtm, val)     ((rtm)->modelName = (val))
#endif

#ifndef rtmGetNonInlinedSFcns
# define rtmGetNonInlinedSFcns(rtm)    ((rtm)->NonInlinedSFcns)
#endif

#ifndef rtmSetNonInlinedSFcns
# define rtmSetNonInlinedSFcns(rtm, val) ((rtm)->NonInlinedSFcns = (val))
#endif

#ifndef rtmGetNumBlockIO
# define rtmGetNumBlockIO(rtm)         ((rtm)->Sizes.numBlockIO)
#endif

#ifndef rtmSetNumBlockIO
# define rtmSetNumBlockIO(rtm, val)    ((rtm)->Sizes.numBlockIO = (val))
#endif

#ifndef rtmGetNumBlockParams
# define rtmGetNumBlockParams(rtm)     ((rtm)->Sizes.numBlockPrms)
#endif

#ifndef rtmSetNumBlockParams
# define rtmSetNumBlockParams(rtm, val) ((rtm)->Sizes.numBlockPrms = (val))
#endif

#ifndef rtmGetNumBlocks
# define rtmGetNumBlocks(rtm)          ((rtm)->Sizes.numBlocks)
#endif

#ifndef rtmSetNumBlocks
# define rtmSetNumBlocks(rtm, val)     ((rtm)->Sizes.numBlocks = (val))
#endif

#ifndef rtmGetNumContStates
# define rtmGetNumContStates(rtm)      ((rtm)->Sizes.numContStates)
#endif

#ifndef rtmSetNumContStates
# define rtmSetNumContStates(rtm, val) ((rtm)->Sizes.numContStates = (val))
#endif

#ifndef rtmGetNumDWork
# define rtmGetNumDWork(rtm)           ((rtm)->Sizes.numDwork)
#endif

#ifndef rtmSetNumDWork
# define rtmSetNumDWork(rtm, val)      ((rtm)->Sizes.numDwork = (val))
#endif

#ifndef rtmGetNumInputPorts
# define rtmGetNumInputPorts(rtm)      ((rtm)->Sizes.numIports)
#endif

#ifndef rtmSetNumInputPorts
# define rtmSetNumInputPorts(rtm, val) ((rtm)->Sizes.numIports = (val))
#endif

#ifndef rtmGetNumNonSampledZCs
# define rtmGetNumNonSampledZCs(rtm)   ((rtm)->Sizes.numNonSampZCs)
#endif

#ifndef rtmSetNumNonSampledZCs
# define rtmSetNumNonSampledZCs(rtm, val) ((rtm)->Sizes.numNonSampZCs = (val))
#endif

#ifndef rtmGetNumOutputPorts
# define rtmGetNumOutputPorts(rtm)     ((rtm)->Sizes.numOports)
#endif

#ifndef rtmSetNumOutputPorts
# define rtmSetNumOutputPorts(rtm, val) ((rtm)->Sizes.numOports = (val))
#endif

#ifndef rtmGetNumSFcnParams
# define rtmGetNumSFcnParams(rtm)      ((rtm)->Sizes.numSFcnPrms)
#endif

#ifndef rtmSetNumSFcnParams
# define rtmSetNumSFcnParams(rtm, val) ((rtm)->Sizes.numSFcnPrms = (val))
#endif

#ifndef rtmGetNumSFunctions
# define rtmGetNumSFunctions(rtm)      ((rtm)->Sizes.numSFcns)
#endif

#ifndef rtmSetNumSFunctions
# define rtmSetNumSFunctions(rtm, val) ((rtm)->Sizes.numSFcns = (val))
#endif

#ifndef rtmGetNumSampleTimes
# define rtmGetNumSampleTimes(rtm)     ((rtm)->Sizes.numSampTimes)
#endif

#ifndef rtmSetNumSampleTimes
# define rtmSetNumSampleTimes(rtm, val) ((rtm)->Sizes.numSampTimes = (val))
#endif

#ifndef rtmGetNumU
# define rtmGetNumU(rtm)               ((rtm)->Sizes.numU)
#endif

#ifndef rtmSetNumU
# define rtmSetNumU(rtm, val)          ((rtm)->Sizes.numU = (val))
#endif

#ifndef rtmGetNumY
# define rtmGetNumY(rtm)               ((rtm)->Sizes.numY)
#endif

#ifndef rtmSetNumY
# define rtmSetNumY(rtm, val)          ((rtm)->Sizes.numY = (val))
#endif

#ifndef rtmGetOdeF
# define rtmGetOdeF(rtm)               ((rtm)->ModelData.odeF)
#endif

#ifndef rtmSetOdeF
# define rtmSetOdeF(rtm, val)          ((rtm)->ModelData.odeF = (val))
#endif

#ifndef rtmGetOdeY
# define rtmGetOdeY(rtm)               ((rtm)->ModelData.odeY)
#endif

#ifndef rtmSetOdeY
# define rtmSetOdeY(rtm, val)          ((rtm)->ModelData.odeY = (val))
#endif

#ifndef rtmGetOffsetTimeArray
# define rtmGetOffsetTimeArray(rtm)    ((rtm)->Timing.offsetTimesArray)
#endif

#ifndef rtmSetOffsetTimeArray
# define rtmSetOffsetTimeArray(rtm, val) ((rtm)->Timing.offsetTimesArray = (val))
#endif

#ifndef rtmGetOffsetTimePtr
# define rtmGetOffsetTimePtr(rtm)      ((rtm)->Timing.offsetTimes)
#endif

#ifndef rtmSetOffsetTimePtr
# define rtmSetOffsetTimePtr(rtm, val) ((rtm)->Timing.offsetTimes = (val))
#endif

#ifndef rtmGetOptions
# define rtmGetOptions(rtm)            ((rtm)->Sizes.options)
#endif

#ifndef rtmSetOptions
# define rtmSetOptions(rtm, val)       ((rtm)->Sizes.options = (val))
#endif

#ifndef rtmGetParamIsMalloced
# define rtmGetParamIsMalloced(rtm)    ((rtm)->ModelData.paramIsMalloced)
#endif

#ifndef rtmSetParamIsMalloced
# define rtmSetParamIsMalloced(rtm, val) ((rtm)->ModelData.paramIsMalloced = (val))
#endif

#ifndef rtmGetPath
# define rtmGetPath(rtm)               ((rtm)->path)
#endif

#ifndef rtmSetPath
# define rtmSetPath(rtm, val)          ((rtm)->path = (val))
#endif

#ifndef rtmGetPerTaskSampleHits
# define rtmGetPerTaskSampleHits(rtm)  ((rtm)->Timing.RateInteraction)
#endif

#ifndef rtmSetPerTaskSampleHits
# define rtmSetPerTaskSampleHits(rtm, val) ((rtm)->Timing.RateInteraction = (val))
#endif

#ifndef rtmGetPerTaskSampleHitsArray
# define rtmGetPerTaskSampleHitsArray(rtm) ((rtm)->Timing.perTaskSampleHitsArray)
#endif

#ifndef rtmSetPerTaskSampleHitsArray
# define rtmSetPerTaskSampleHitsArray(rtm, val) ((rtm)->Timing.perTaskSampleHitsArray = (val))
#endif

#ifndef rtmGetPerTaskSampleHitsPtr
# define rtmGetPerTaskSampleHitsPtr(rtm) ((rtm)->Timing.perTaskSampleHits)
#endif

#ifndef rtmSetPerTaskSampleHitsPtr
# define rtmSetPerTaskSampleHitsPtr(rtm, val) ((rtm)->Timing.perTaskSampleHits = (val))
#endif

#ifndef rtmGetPrevZCSigState
# define rtmGetPrevZCSigState(rtm)     ((rtm)->ModelData.prevZCSigState)
#endif

#ifndef rtmSetPrevZCSigState
# define rtmSetPrevZCSigState(rtm, val) ((rtm)->ModelData.prevZCSigState = (val))
#endif

#ifndef rtmGetRTWExtModeInfo
# define rtmGetRTWExtModeInfo(rtm)     ((rtm)->extModeInfo)
#endif

#ifndef rtmSetRTWExtModeInfo
# define rtmSetRTWExtModeInfo(rtm, val) ((rtm)->extModeInfo = (val))
#endif

#ifndef rtmGetRTWGeneratedSFcn
# define rtmGetRTWGeneratedSFcn(rtm)   ((rtm)->Sizes.rtwGenSfcn)
#endif

#ifndef rtmSetRTWGeneratedSFcn
# define rtmSetRTWGeneratedSFcn(rtm, val) ((rtm)->Sizes.rtwGenSfcn = (val))
#endif

#ifndef rtmGetRTWLogInfo
# define rtmGetRTWLogInfo(rtm)         ((rtm)->rtwLogInfo)
#endif

#ifndef rtmSetRTWLogInfo
# define rtmSetRTWLogInfo(rtm, val)    ((rtm)->rtwLogInfo = (val))
#endif

#ifndef rtmGetRTWRTModelMethodsInfo
# define rtmGetRTWRTModelMethodsInfo(rtm) ((rtm)->modelMethodsInfo)
#endif

#ifndef rtmSetRTWRTModelMethodsInfo
# define rtmSetRTWRTModelMethodsInfo(rtm, val) ((rtm)->modelMethodsInfo = (val))
#endif

#ifndef rtmGetRTWSfcnInfo
# define rtmGetRTWSfcnInfo(rtm)        ((rtm)->sfcnInfo)
#endif

#ifndef rtmSetRTWSfcnInfo
# define rtmSetRTWSfcnInfo(rtm, val)   ((rtm)->sfcnInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfo
# define rtmGetRTWSolverInfo(rtm)      ((rtm)->solverInfo)
#endif

#ifndef rtmSetRTWSolverInfo
# define rtmSetRTWSolverInfo(rtm, val) ((rtm)->solverInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfoPtr
# define rtmGetRTWSolverInfoPtr(rtm)   ((rtm)->solverInfoPtr)
#endif

#ifndef rtmSetRTWSolverInfoPtr
# define rtmSetRTWSolverInfoPtr(rtm, val) ((rtm)->solverInfoPtr = (val))
#endif

#ifndef rtmGetReservedForXPC
# define rtmGetReservedForXPC(rtm)     ((rtm)->SpecialInfo.xpcData)
#endif

#ifndef rtmSetReservedForXPC
# define rtmSetReservedForXPC(rtm, val) ((rtm)->SpecialInfo.xpcData = (val))
#endif

#ifndef rtmGetRootDWork
# define rtmGetRootDWork(rtm)          ((rtm)->Work.dwork)
#endif

#ifndef rtmSetRootDWork
# define rtmSetRootDWork(rtm, val)     ((rtm)->Work.dwork = (val))
#endif

#ifndef rtmGetSFunctions
# define rtmGetSFunctions(rtm)         ((rtm)->childSfunctions)
#endif

#ifndef rtmSetSFunctions
# define rtmSetSFunctions(rtm, val)    ((rtm)->childSfunctions = (val))
#endif

#ifndef rtmGetSampleHitArray
# define rtmGetSampleHitArray(rtm)     ((rtm)->Timing.sampleHitArray)
#endif

#ifndef rtmSetSampleHitArray
# define rtmSetSampleHitArray(rtm, val) ((rtm)->Timing.sampleHitArray = (val))
#endif

#ifndef rtmGetSampleHitPtr
# define rtmGetSampleHitPtr(rtm)       ((rtm)->Timing.sampleHits)
#endif

#ifndef rtmSetSampleHitPtr
# define rtmSetSampleHitPtr(rtm, val)  ((rtm)->Timing.sampleHits = (val))
#endif

#ifndef rtmGetSampleTimeArray
# define rtmGetSampleTimeArray(rtm)    ((rtm)->Timing.sampleTimesArray)
#endif

#ifndef rtmSetSampleTimeArray
# define rtmSetSampleTimeArray(rtm, val) ((rtm)->Timing.sampleTimesArray = (val))
#endif

#ifndef rtmGetSampleTimePtr
# define rtmGetSampleTimePtr(rtm)      ((rtm)->Timing.sampleTimes)
#endif

#ifndef rtmSetSampleTimePtr
# define rtmSetSampleTimePtr(rtm, val) ((rtm)->Timing.sampleTimes = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDArray
# define rtmGetSampleTimeTaskIDArray(rtm) ((rtm)->Timing.sampleTimeTaskIDArray)
#endif

#ifndef rtmSetSampleTimeTaskIDArray
# define rtmSetSampleTimeTaskIDArray(rtm, val) ((rtm)->Timing.sampleTimeTaskIDArray = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDPtr
# define rtmGetSampleTimeTaskIDPtr(rtm) ((rtm)->Timing.sampleTimeTaskIDPtr)
#endif

#ifndef rtmSetSampleTimeTaskIDPtr
# define rtmSetSampleTimeTaskIDPtr(rtm, val) ((rtm)->Timing.sampleTimeTaskIDPtr = (val))
#endif

#ifndef rtmGetSimMode
# define rtmGetSimMode(rtm)            ((rtm)->simMode)
#endif

#ifndef rtmSetSimMode
# define rtmSetSimMode(rtm, val)       ((rtm)->simMode = (val))
#endif

#ifndef rtmGetSimTimeStep
# define rtmGetSimTimeStep(rtm)        ((rtm)->Timing.simTimeStep)
#endif

#ifndef rtmSetSimTimeStep
# define rtmSetSimTimeStep(rtm, val)   ((rtm)->Timing.simTimeStep = (val))
#endif

#ifndef rtmGetStartTime
# define rtmGetStartTime(rtm)          ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetStartTime
# define rtmSetStartTime(rtm, val)     ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmGetStepSize
# define rtmGetStepSize(rtm)           ((rtm)->Timing.stepSize)
#endif

#ifndef rtmSetStepSize
# define rtmSetStepSize(rtm, val)      ((rtm)->Timing.stepSize = (val))
#endif

#ifndef rtmGetStopRequestedFlag
# define rtmGetStopRequestedFlag(rtm)  ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequestedFlag
# define rtmSetStopRequestedFlag(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetTaskCounters
# define rtmGetTaskCounters(rtm)       ((rtm)->Timing.TaskCounters)
#endif

#ifndef rtmSetTaskCounters
# define rtmSetTaskCounters(rtm, val)  ((rtm)->Timing.TaskCounters = (val))
#endif

#ifndef rtmGetTaskTimeArray
# define rtmGetTaskTimeArray(rtm)      ((rtm)->Timing.tArray)
#endif

#ifndef rtmSetTaskTimeArray
# define rtmSetTaskTimeArray(rtm, val) ((rtm)->Timing.tArray = (val))
#endif

#ifndef rtmGetTimePtr
# define rtmGetTimePtr(rtm)            ((rtm)->Timing.t)
#endif

#ifndef rtmSetTimePtr
# define rtmSetTimePtr(rtm, val)       ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTimingData
# define rtmGetTimingData(rtm)         ((rtm)->Timing.timingData)
#endif

#ifndef rtmSetTimingData
# define rtmSetTimingData(rtm, val)    ((rtm)->Timing.timingData = (val))
#endif

#ifndef rtmGetU
# define rtmGetU(rtm)                  ((rtm)->ModelData.inputs)
#endif

#ifndef rtmSetU
# define rtmSetU(rtm, val)             ((rtm)->ModelData.inputs = (val))
#endif

#ifndef rtmGetVarNextHitTimesListPtr
# define rtmGetVarNextHitTimesListPtr(rtm) ((rtm)->Timing.varNextHitTimesList)
#endif

#ifndef rtmSetVarNextHitTimesListPtr
# define rtmSetVarNextHitTimesListPtr(rtm, val) ((rtm)->Timing.varNextHitTimesList = (val))
#endif

#ifndef rtmGetY
# define rtmGetY(rtm)                  ((rtm)->ModelData.outputs)
#endif

#ifndef rtmSetY
# define rtmSetY(rtm, val)             ((rtm)->ModelData.outputs = (val))
#endif

#ifndef rtmGetZCCacheNeedsReset
# define rtmGetZCCacheNeedsReset(rtm)  ((rtm)->ModelData.zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
# define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->ModelData.zCCacheNeedsReset = (val))
#endif

#ifndef rtmGetZCSignalValues
# define rtmGetZCSignalValues(rtm)     ((rtm)->ModelData.zcSignalValues)
#endif

#ifndef rtmSetZCSignalValues
# define rtmSetZCSignalValues(rtm, val) ((rtm)->ModelData.zcSignalValues = (val))
#endif

#ifndef rtmGet_TimeOfLastOutput
# define rtmGet_TimeOfLastOutput(rtm)  ((rtm)->Timing.timeOfLastOutput)
#endif

#ifndef rtmSet_TimeOfLastOutput
# define rtmSet_TimeOfLastOutput(rtm, val) ((rtm)->Timing.timeOfLastOutput = (val))
#endif

#ifndef rtmGetdX
# define rtmGetdX(rtm)                 ((rtm)->ModelData.derivs)
#endif

#ifndef rtmSetdX
# define rtmSetdX(rtm, val)            ((rtm)->ModelData.derivs = (val))
#endif

#ifndef rtmGetChecksumVal
# define rtmGetChecksumVal(rtm, idx)   ((rtm)->Sizes.checksums[idx])
#endif

#ifndef rtmSetChecksumVal
# define rtmSetChecksumVal(rtm, idx, val) ((rtm)->Sizes.checksums[idx] = (val))
#endif

#ifndef rtmGetDWork
# define rtmGetDWork(rtm, idx)         ((rtm)->Work.dwork[idx])
#endif

#ifndef rtmSetDWork
# define rtmSetDWork(rtm, idx, val)    ((rtm)->Work.dwork[idx] = (val))
#endif

#ifndef rtmGetOffsetTime
# define rtmGetOffsetTime(rtm, idx)    ((rtm)->Timing.offsetTimes[idx])
#endif

#ifndef rtmSetOffsetTime
# define rtmSetOffsetTime(rtm, idx, val) ((rtm)->Timing.offsetTimes[idx] = (val))
#endif

#ifndef rtmGetSFunction
# define rtmGetSFunction(rtm, idx)     ((rtm)->childSfunctions[idx])
#endif

#ifndef rtmSetSFunction
# define rtmSetSFunction(rtm, idx, val) ((rtm)->childSfunctions[idx] = (val))
#endif

#ifndef rtmGetSampleTime
# define rtmGetSampleTime(rtm, idx)    ((rtm)->Timing.sampleTimes[idx])
#endif

#ifndef rtmSetSampleTime
# define rtmSetSampleTime(rtm, idx, val) ((rtm)->Timing.sampleTimes[idx] = (val))
#endif

#ifndef rtmGetSampleTimeTaskID
# define rtmGetSampleTimeTaskID(rtm, idx) ((rtm)->Timing.sampleTimeTaskIDPtr[idx])
#endif

#ifndef rtmSetSampleTimeTaskID
# define rtmSetSampleTimeTaskID(rtm, idx, val) ((rtm)->Timing.sampleTimeTaskIDPtr[idx] = (val))
#endif

#ifndef rtmGetVarNextHitTime
# define rtmGetVarNextHitTime(rtm, idx) ((rtm)->Timing.varNextHitTimesList[idx])
#endif

#ifndef rtmSetVarNextHitTime
# define rtmSetVarNextHitTime(rtm, idx, val) ((rtm)->Timing.varNextHitTimesList[idx] = (val))
#endif

#ifndef rtmIsContinuousTask
# define rtmIsContinuousTask(rtm, tid) ((tid) <= 1)
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmIsFirstInitCond
# define rtmIsFirstInitCond(rtm)       (Gravity_Well_M->Timing.t[0] == (rtmGetTStart((rtm))))
#endif

#ifndef rtmIsMajorTimeStep
# define rtmIsMajorTimeStep(rtm)       (((rtm)->Timing.simTimeStep) == MAJOR_TIME_STEP)
#endif

#ifndef rtmIsMinorTimeStep
# define rtmIsMinorTimeStep(rtm)       (((rtm)->Timing.simTimeStep) == MINOR_TIME_STEP)
#endif

#ifndef rtmIsSampleHit
# define rtmIsSampleHit(rtm, sti, tid) (((rtm)->Timing.sampleTimeTaskIDPtr[sti] == (tid)))
#endif

#ifndef rtmStepTask
# define rtmStepTask(rtm, idx)         ((rtm)->Timing.TaskCounters.TID[(idx)] == 0)
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmSetT
# define rtmSetT(rtm, val)                                       /* Do Nothing */
#endif

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm)             ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetTFinal
# define rtmSetTFinal(rtm, val)        ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               ((rtm)->Timing.t)
#endif

#ifndef rtmSetTPtr
# define rtmSetTPtr(rtm, val)          ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTStart
# define rtmGetTStart(rtm)             ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetTStart
# define rtmSetTStart(rtm, val)        ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmGetTaskTime
# define rtmGetTaskTime(rtm, sti)      (rtmGetTPtr((rtm))[(rtm)->Timing.sampleTimeTaskIDPtr[sti]])
#endif

#ifndef rtmSetTaskTime
# define rtmSetTaskTime(rtm, sti, val) (rtmGetTPtr((rtm))[sti] = (val))
#endif

#ifndef rtmGetTimeOfLastOutput
# define rtmGetTimeOfLastOutput(rtm)   ((rtm)->Timing.timeOfLastOutput)
#endif

#ifdef rtmGetRTWSolverInfo
#undef rtmGetRTWSolverInfo
#endif

#define rtmGetRTWSolverInfo(rtm)       &((rtm)->solverInfo)

/* Definition for use in the target main file */
#define Gravity_Well_rtModel           RT_MODEL_Gravity_Well

/* Block signals for system '<S3>/Euclidean Distance' */
typedef struct {
  real_T mag;                          /* '<S3>/Euclidean Distance' */
} rtB_EuclideanDistance_Gravity_W;

/* Block states (auto storage) for system '<S3>/Euclidean Distance' */
typedef struct {
  uint8_T is_active_c7_Gravity_Well;   /* '<S3>/Euclidean Distance' */
  boolean_T doneDoubleBufferReInit;    /* '<S3>/Euclidean Distance' */
} rtDW_EuclideanDistance_Gravity_;

/* Block signals (auto storage) */
typedef struct {
  real_T GearRatio[3];                 /* '<S5>/Gear Ratio' */
  real_T JointOffsets[3];              /* '<S2>/Joint Offsets' */
  real_T ToolOffset2[16];              /* '<S2>/Tool Offset2' */
  real_T MathFunction[18];             /* '<S2>/Math Function' */
  real_T Subtract[3];                  /* '<S3>/Subtract' */
  real_T Stiffness[3];                 /* '<S3>/Stiffness' */
  real_T Product1[3];                  /* '<S12>/Product1' */
  real_T Subtract_o[3];                /* '<S4>/Subtract' */
  real_T Stiffness_e[3];               /* '<S4>/Stiffness' */
  real_T Product1_e[3];                /* '<S15>/Product1' */
  real_T ConverttoPositiveRotationConven[3];/* '<S2>/Convert to Positive Rotation Convension Used in Kinematics1' */
  real_T Saturation[3];                /* '<S8>/Saturation' */
  real_T RateTransition1[3];           /* '<Root>/Rate Transition1' */
  real_T Product[3];                   /* '<S12>/Product' */
  real_T Product_h[3];                 /* '<S15>/Product' */
  real_T y[3];                         /* '<S8>/Smart Saturation' */
  real_T y_a[3];                       /* '<S8>/Joint Torque to Motor Torque' */
  real_T pos[3];                       /* '<S2>/Forward Kinematics ' */
  real_T Rot[9];                       /* '<S2>/Forward Kinematics ' */
  real_T Jac[18];                      /* '<S2>/Forward Kinematics ' */
  real_T q[3];                         /* '<S5>/Embedded MATLAB Function' */
  rtB_EuclideanDistance_Gravity_W sf_EuclideanDistance_j;/* '<S4>/Euclidean Distance' */
  rtB_EuclideanDistance_Gravity_W sf_EuclideanDistance;/* '<S3>/Euclidean Distance' */
} BlockIO_Gravity_Well;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T HILInitialize_AIMinimums[2];  /* '<S2>/HIL Initialize' */
  real_T HILInitialize_AIMaximums[2];  /* '<S2>/HIL Initialize' */
  real_T HILInitialize_FilterFrequency[3];/* '<S2>/HIL Initialize' */
  real_T HILInitialize_POSortedFreqs[3];/* '<S2>/HIL Initialize' */
  real_T HILInitialize_POValues[3];    /* '<S2>/HIL Initialize' */
  void *HILWritePWM_PWORK;             /* '<S2>/HIL Write PWM' */
  void *HILReadAnalog_PWORK;           /* '<S2>/HIL Read Analog' */
  void *VRSink1_PWORK[5];              /* '<Root>/VR Sink1' */
  int32_T HILInitialize_QuadratureModes[3];/* '<S2>/HIL Initialize' */
  int32_T HILInitialize_InitialEICounts[3];/* '<S2>/HIL Initialize' */
  int32_T HILInitialize_POModeValues[3];/* '<S2>/HIL Initialize' */
  int32_T HILReadEncoderTimebase_Buffer[3];/* '<S2>/HIL Read Encoder Timebase' */
  uint32_T HILInitialize_POSortedChans[3];/* '<S2>/HIL Initialize' */
  t_card HILInitialize_Card;           /* '<S2>/HIL Initialize' */
  t_task HILReadEncoderTimebase_Task;  /* '<S2>/HIL Read Encoder Timebase' */
  struct {
    int_T IcNeedsLoading;
  } Integrator1_IWORK;                 /* '<S12>/Integrator1' */

  struct {
    int_T IcNeedsLoading;
  } Integrator1_IWORK_d;               /* '<S15>/Integrator1' */

  uint8_T is_active_c3_Gravity_Well;   /* '<S8>/Smart Saturation' */
  uint8_T is_active_c4_Gravity_Well;   /* '<S8>/Joint Torque to Motor Torque' */
  uint8_T is_active_c5_Gravity_Well;   /* '<S2>/Forward Kinematics ' */
  uint8_T is_active_c8_Gravity_Well;   /* '<S5>/Embedded MATLAB Function' */
  boolean_T doneDoubleBufferReInit;    /* '<S8>/Smart Saturation' */
  boolean_T doneDoubleBufferReInit_a;  /* '<S8>/Joint Torque to Motor Torque' */
  boolean_T doneDoubleBufferReInit_f;  /* '<S2>/Forward Kinematics ' */
  boolean_T doneDoubleBufferReInit_l;  /* '<S5>/Embedded MATLAB Function' */
  rtDW_EuclideanDistance_Gravity_ sf_EuclideanDistance_j;/* '<S4>/Euclidean Distance' */
  rtDW_EuclideanDistance_Gravity_ sf_EuclideanDistance;/* '<S3>/Euclidean Distance' */
} D_Work_Gravity_Well;

/* Continuous states (auto storage) */
typedef struct {
  real_T Integrator_CSTATE[3];         /* '<S12>/Integrator' */
  real_T Integrator_CSTATE_o[3];       /* '<S15>/Integrator' */
  real_T Integrator1_CSTATE[3];        /* '<S12>/Integrator1' */
  real_T Integrator1_CSTATE_p[3];      /* '<S15>/Integrator1' */
} ContinuousStates_Gravity_Well;

/* State derivatives (auto storage) */
typedef struct {
  real_T Integrator_CSTATE[3];         /* '<S12>/Integrator' */
  real_T Integrator_CSTATE_o[3];       /* '<S15>/Integrator' */
  real_T Integrator1_CSTATE[3];        /* '<S12>/Integrator1' */
  real_T Integrator1_CSTATE_p[3];      /* '<S15>/Integrator1' */
} StateDerivatives_Gravity_Well;

/* State disabled  */
typedef struct {
  boolean_T Integrator_CSTATE[3];      /* '<S12>/Integrator' */
  boolean_T Integrator_CSTATE_o[3];    /* '<S15>/Integrator' */
  boolean_T Integrator1_CSTATE[3];     /* '<S12>/Integrator1' */
  boolean_T Integrator1_CSTATE_p[3];   /* '<S15>/Integrator1' */
} StateDisabled_Gravity_Well;

#ifndef ODE1_INTG
#define ODE1_INTG

/* ODE1 Integration Data */
typedef struct {
  real_T *f[1];                        /* derivatives */
} ODE1_IntgData;

#endif

/* Backward compatible GRT Identifiers */
#define rtB                            Gravity_Well_B
#define BlockIO                        BlockIO_Gravity_Well
#define rtX                            Gravity_Well_X
#define ContinuousStates               ContinuousStates_Gravity_Well
#define rtP                            Gravity_Well_P
#define Parameters                     Parameters_Gravity_Well
#define rtDWork                        Gravity_Well_DWork
#define D_Work                         D_Work_Gravity_Well

/* Parameters (auto storage) */
struct Parameters_Gravity_Well {
  real_T HILInitialize_OOStart;        /* Expression: set_other_outputs_at_start
                                        * '<S2>/HIL Initialize'
                                        */
  real_T HILInitialize_OOEnter;        /* Expression: set_other_outputs_at_switch_in
                                        * '<S2>/HIL Initialize'
                                        */
  real_T HILInitialize_OOTerminate;    /* Expression: set_other_outputs_at_terminate
                                        * '<S2>/HIL Initialize'
                                        */
  real_T HILInitialize_OOExit;         /* Expression: set_other_outputs_at_switch_out
                                        * '<S2>/HIL Initialize'
                                        */
  real_T HILInitialize_AIHigh;         /* Expression: analog_input_maximums
                                        * '<S2>/HIL Initialize'
                                        */
  real_T HILInitialize_AILow;          /* Expression: analog_input_minimums
                                        * '<S2>/HIL Initialize'
                                        */
  real_T HILInitialize_AOWatchdog;     /* Expression: watchdog_analog_outputs
                                        * '<S2>/HIL Initialize'
                                        */
  real_T HILInitialize_POInitial;      /* Expression: initial_pwm_outputs
                                        * '<S2>/HIL Initialize'
                                        */
  real_T HILInitialize_POFinal;        /* Expression: final_pwm_outputs
                                        * '<S2>/HIL Initialize'
                                        */
  real_T HILInitialize_POWatchdog;     /* Expression: watchdog_pwm_outputs
                                        * '<S2>/HIL Initialize'
                                        */
  real_T HILInitialize_OOWatchdog;     /* Expression: watchdog_other_outputs
                                        * '<S2>/HIL Initialize'
                                        */
  real_T Bias1_Bias[3];                /* Expression: [0 -659 -910]
                                        * '<S5>/Bias1'
                                        */
  real_T Encoder_Gain;                 /* Expression: 2*pi/2048
                                        * '<S5>/Encoder'
                                        */
  real_T GearRatio_Gain[3];            /* Expression: 1./[7.461 -7.519 7.529]
                                        * '<S5>/Gear Ratio'
                                        */
  real_T ConverttoPositiveRotationConven[3];/* Expression: [1 -1 -1]
                                             * '<S2>/Convert to Positive Rotation Convension Used in Kinematics'
                                             */
  real_T JointOffsets_Bias[3];         /* Expression: [0 0 pi()/2]
                                        * '<S2>/Joint Offsets'
                                        */
  real_T ToolOffset2_Value[16];        /* Expression: [1 0 0 0;0 1 0 0;0 0 1 0.039;0 0 0 1]
                                        * '<S2>/Tool Offset2'
                                        */
  real_T Constant1_Value[3];           /* Expression: [0 0 0]
                                        * '<S3>/Constant1'
                                        */
  real_T Posz_Value;                   /* Expression: 0.15
                                        * '<S3>/Posz'
                                        */
  real_T Posx_Value;                   /* Expression: -0.08
                                        * '<S3>/Posx'
                                        */
  real_T Posy_Value;                   /* Expression: 0
                                        * '<S3>/Posy'
                                        */
  real_T Stiffness_Gain;               /* Expression: 150
                                        * '<S3>/Stiffness'
                                        */
  real_T Constant2_Value;              /* Expression: 200
                                        * '<S3>/Constant2'
                                        */
  real_T Integrator_IC;                /* Expression: 0
                                        * '<S12>/Integrator'
                                        */
  real_T Damping_Value;                /* Expression: 0.01
                                        * '<S3>/Damping'
                                        */
  real_T Compare_Threshold;            /* Expression: 0.03
                                        * '<S3>/Compare'
                                        */
  real_T Constant1_Value_p[3];         /* Expression: [0 0 0]
                                        * '<S4>/Constant1'
                                        */
  real_T Posz_Value_i;                 /* Expression: 0.1
                                        * '<S4>/Posz'
                                        */
  real_T Posx_Value_p;                 /* Expression: 0.05
                                        * '<S4>/Posx'
                                        */
  real_T Posy_Value_o;                 /* Expression: 0
                                        * '<S4>/Posy'
                                        */
  real_T Stiffness_Gain_h;             /* Expression: 100
                                        * '<S4>/Stiffness'
                                        */
  real_T Constant2_Value_l;            /* Expression: 200
                                        * '<S4>/Constant2'
                                        */
  real_T Integrator_IC_i;              /* Expression: 0
                                        * '<S15>/Integrator'
                                        */
  real_T Damping_Value_k;              /* Expression: 0.01
                                        * '<S4>/Damping'
                                        */
  real_T Compare_Threshold_c;          /* Expression: 0.02
                                        * '<S4>/Compare'
                                        */
  real_T Constant_Value[3];            /* Expression: [0; 0; 0]
                                        * '<S2>/Constant'
                                        */
  real_T ConverttoPositiveRotationConv_k[3];/* Expression: [1; -1 ;-1]
                                             * '<S2>/Convert to Positive Rotation Convension Used in Kinematics1'
                                             */
  real_T GearRatio1_Gain[3];           /* Expression: 1./[7.461 -7.519 7.529]
                                        * '<S8>/Gear Ratio1'
                                        */
  real_T Kt_Gain;                      /* Expression: 1./38.526e-3
                                        * '<S8>/Kt'
                                        */
  real_T Saturation_UpperSat;          /* Expression: 1.6
                                        * '<S8>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: -1.6
                                        * '<S8>/Saturation'
                                        */
  real_T Constant_Value_c;             /* Expression: 2
                                        * '<S12>/Constant'
                                        */
  real_T z1_Value;                     /* Expression: 1
                                        * '<S3>/z1'
                                        */
  real_T Constant_Value_n;             /* Expression: 2
                                        * '<S15>/Constant'
                                        */
  real_T z1_Value_h;                   /* Expression: 1
                                        * '<S4>/z1'
                                        */
  int32_T HILInitialize_DOWatchdog;    /* Computed Parameter: DOWatchdog
                                        * '<S2>/HIL Initialize'
                                        */
  int32_T HILInitialize_EIInitial;     /* Computed Parameter: EIInitial
                                        * '<S2>/HIL Initialize'
                                        */
  int32_T HILReadEncoderTimebase_Clock;/* Computed Parameter: Clock
                                        * '<S2>/HIL Read Encoder Timebase'
                                        */
  uint32_T HILInitialize_AIChannels[2];/* Computed Parameter: AIChannels
                                        * '<S2>/HIL Initialize'
                                        */
  uint32_T HILInitialize_EIChannels[3];/* Computed Parameter: EIChannels
                                        * '<S2>/HIL Initialize'
                                        */
  uint32_T HILInitialize_POChannels[3];/* Computed Parameter: POChannels
                                        * '<S2>/HIL Initialize'
                                        */
  uint32_T HILReadEncoderTimebase_Channels[3];/* Computed Parameter: Channels
                                               * '<S2>/HIL Read Encoder Timebase'
                                               */
  uint32_T HILReadEncoderTimebase_SamplesI;/* Computed Parameter: SamplesInBuffer
                                            * '<S2>/HIL Read Encoder Timebase'
                                            */
  uint32_T HILWritePWM_Channels[3];    /* Computed Parameter: Channels
                                        * '<S2>/HIL Write PWM'
                                        */
  uint32_T HILReadAnalog_Channels[3];  /* Computed Parameter: Channels
                                        * '<S2>/HIL Read Analog'
                                        */
  boolean_T HILInitialize_Active;      /* Computed Parameter: Active
                                        * '<S2>/HIL Initialize'
                                        */
  boolean_T HILInitialize_CKPStart;    /* Computed Parameter: CKPStart
                                        * '<S2>/HIL Initialize'
                                        */
  boolean_T HILInitialize_CKPEnter;    /* Computed Parameter: CKPEnter
                                        * '<S2>/HIL Initialize'
                                        */
  boolean_T HILInitialize_AIPStart;    /* Computed Parameter: AIPStart
                                        * '<S2>/HIL Initialize'
                                        */
  boolean_T HILInitialize_AIPEnter;    /* Computed Parameter: AIPEnter
                                        * '<S2>/HIL Initialize'
                                        */
  boolean_T HILInitialize_AOPStart;    /* Computed Parameter: AOPStart
                                        * '<S2>/HIL Initialize'
                                        */
  boolean_T HILInitialize_AOPEnter;    /* Computed Parameter: AOPEnter
                                        * '<S2>/HIL Initialize'
                                        */
  boolean_T HILInitialize_AOStart;     /* Computed Parameter: AOStart
                                        * '<S2>/HIL Initialize'
                                        */
  boolean_T HILInitialize_AOEnter;     /* Computed Parameter: AOEnter
                                        * '<S2>/HIL Initialize'
                                        */
  boolean_T HILInitialize_AOTerminate; /* Computed Parameter: AOTerminate
                                        * '<S2>/HIL Initialize'
                                        */
  boolean_T HILInitialize_AOExit;      /* Computed Parameter: AOExit
                                        * '<S2>/HIL Initialize'
                                        */
  boolean_T HILInitialize_AOReset;     /* Computed Parameter: AOReset
                                        * '<S2>/HIL Initialize'
                                        */
  boolean_T HILInitialize_DOStart;     /* Computed Parameter: DOStart
                                        * '<S2>/HIL Initialize'
                                        */
  boolean_T HILInitialize_DOEnter;     /* Computed Parameter: DOEnter
                                        * '<S2>/HIL Initialize'
                                        */
  boolean_T HILInitialize_DOTerminate; /* Computed Parameter: DOTerminate
                                        * '<S2>/HIL Initialize'
                                        */
  boolean_T HILInitialize_DOExit;      /* Computed Parameter: DOExit
                                        * '<S2>/HIL Initialize'
                                        */
  boolean_T HILInitialize_DOReset;     /* Computed Parameter: DOReset
                                        * '<S2>/HIL Initialize'
                                        */
  boolean_T HILInitialize_EIPStart;    /* Computed Parameter: EIPStart
                                        * '<S2>/HIL Initialize'
                                        */
  boolean_T HILInitialize_EIPEnter;    /* Computed Parameter: EIPEnter
                                        * '<S2>/HIL Initialize'
                                        */
  boolean_T HILInitialize_EIStart;     /* Computed Parameter: EIStart
                                        * '<S2>/HIL Initialize'
                                        */
  boolean_T HILInitialize_EIEnter;     /* Computed Parameter: EIEnter
                                        * '<S2>/HIL Initialize'
                                        */
  boolean_T HILInitialize_POPStart;    /* Computed Parameter: POPStart
                                        * '<S2>/HIL Initialize'
                                        */
  boolean_T HILInitialize_POPEnter;    /* Computed Parameter: POPEnter
                                        * '<S2>/HIL Initialize'
                                        */
  boolean_T HILInitialize_POStart;     /* Computed Parameter: POStart
                                        * '<S2>/HIL Initialize'
                                        */
  boolean_T HILInitialize_POEnter;     /* Computed Parameter: POEnter
                                        * '<S2>/HIL Initialize'
                                        */
  boolean_T HILInitialize_POTerminate; /* Computed Parameter: POTerminate
                                        * '<S2>/HIL Initialize'
                                        */
  boolean_T HILInitialize_POExit;      /* Computed Parameter: POExit
                                        * '<S2>/HIL Initialize'
                                        */
  boolean_T HILInitialize_POReset;     /* Computed Parameter: POReset
                                        * '<S2>/HIL Initialize'
                                        */
  boolean_T HILInitialize_OOReset;     /* Computed Parameter: OOReset
                                        * '<S2>/HIL Initialize'
                                        */
  boolean_T HILReadEncoderTimebase_Active;/* Computed Parameter: Active
                                           * '<S2>/HIL Read Encoder Timebase'
                                           */
  boolean_T HILWritePWM_Active;        /* Computed Parameter: Active
                                        * '<S2>/HIL Write PWM'
                                        */
  boolean_T HILReadAnalog_Active;      /* Computed Parameter: Active
                                        * '<S2>/HIL Read Analog'
                                        */
};

/* Real-time Model Data Structure */
struct RT_MODEL_Gravity_Well {
  const char_T *path;
  const char_T *modelName;
  struct SimStruct_tag * *childSfunctions;
  const char_T *errorStatus;
  SS_SimMode simMode;
  RTWExtModeInfo *extModeInfo;
  RTWSolverInfo solverInfo;
  RTWSolverInfo *solverInfoPtr;
  void *sfcnInfo;

  /*
   * ModelData:
   * The following substructure contains information regarding
   * the data used in the model.
   */
  struct {
    void *blockIO;
    const void *constBlockIO;
    real_T *defaultParam;
    ZCSigState *prevZCSigState;
    real_T *contStates;
    real_T *derivs;
    real_T *zcSignalValues;
    void *inputs;
    void *outputs;
    boolean_T *contStateDisabled;
    boolean_T zCCacheNeedsReset;
    boolean_T derivCacheNeedsReset;
    boolean_T blkStateChange;
    real_T odeF[1][12];
    ODE1_IntgData intgData;
  } ModelData;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
    uint32_T options;
    int_T numContStates;
    int_T numU;
    int_T numY;
    int_T numSampTimes;
    int_T numBlocks;
    int_T numBlockIO;
    int_T numBlockPrms;
    int_T numDwork;
    int_T numSFcnPrms;
    int_T numSFcns;
    int_T numIports;
    int_T numOports;
    int_T numNonSampZCs;
    int_T sysDirFeedThru;
    int_T rtwGenSfcn;
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
    void *xpcData;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T stepSize;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    uint32_T clockTick1;
    uint32_T clockTickH1;
    time_T stepSize1;
    uint32_T clockTick2;
    uint32_T clockTickH2;
    time_T stepSize2;
    struct {
      uint8_T TID[3];
    } TaskCounters;

    struct {
      boolean_T TID1_2;
    } RateInteraction;

    time_T tStart;
    time_T tFinal;
    time_T timeOfLastOutput;
    void *timingData;
    real_T *varNextHitTimesList;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *sampleTimes;
    time_T *offsetTimes;
    int_T *sampleTimeTaskIDPtr;
    int_T *sampleHits;
    int_T *perTaskSampleHits;
    time_T *t;
    time_T sampleTimesArray[3];
    time_T offsetTimesArray[3];
    int_T sampleTimeTaskIDArray[3];
    int_T sampleHitArray[3];
    int_T perTaskSampleHitsArray[9];
    time_T tArray[3];
  } Timing;

  /*
   * Work:
   * The following substructure contains information regarding
   * the work vectors in the model.
   */
  struct {
    void *dwork;
  } Work;
};

/* Block parameters (auto storage) */
extern Parameters_Gravity_Well Gravity_Well_P;

/* Block signals (auto storage) */
extern BlockIO_Gravity_Well Gravity_Well_B;

/* Continuous states (auto storage) */
extern ContinuousStates_Gravity_Well Gravity_Well_X;

/* Block states (auto storage) */
extern D_Work_Gravity_Well Gravity_Well_DWork;

/* Model entry point functions */
extern void Gravity_Well_SetEventsForThisBaseStep(boolean_T *eventFlags);
extern void Gravity_Well_initialize(boolean_T firstTime);
extern void Gravity_Well_output0(int_T tid);
extern void Gravity_Well_update0(int_T tid);
extern void Gravity_Well_output2(int_T tid);
extern void Gravity_Well_update2(int_T tid);
extern void Gravity_Well_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Gravity_Well *Gravity_Well_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : Gravity_Well
 * '<S1>'   : Gravity_Well/Coordinate Transform
 * '<S2>'   : Gravity_Well/Omni
 * '<S3>'   : Gravity_Well/W
 * '<S4>'   : Gravity_Well/W1
 * '<S5>'   : Gravity_Well/Omni/Encoders to Joints q1, q2, q3
 * '<S6>'   : Gravity_Well/Omni/Encoders to Joints q4, q5, q6
 * '<S7>'   : Gravity_Well/Omni/Forward Kinematics
 * '<S8>'   : Gravity_Well/Omni/Torque to PWM
 * '<S9>'   : Gravity_Well/Omni/Encoders to Joints q1, q2, q3/Embedded MATLAB Function
 * '<S10>'  : Gravity_Well/Omni/Torque to PWM/Joint Torque to Motor Torque
 * '<S11>'  : Gravity_Well/Omni/Torque to PWM/Smart Saturation
 * '<S12>'  : Gravity_Well/W/2nd Order Filter Input ICs1
 * '<S13>'  : Gravity_Well/W/Coordinate Transform1
 * '<S14>'  : Gravity_Well/W/Euclidean Distance
 * '<S15>'  : Gravity_Well/W1/2nd Order Filter Input ICs1
 * '<S16>'  : Gravity_Well/W1/Coordinate Transform1
 * '<S17>'  : Gravity_Well/W1/Euclidean Distance
 */
#endif                                 /* RTW_HEADER_Gravity_Well_h_ */

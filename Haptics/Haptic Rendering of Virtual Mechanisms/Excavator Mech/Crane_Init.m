% P=PISTON, L = LINK,     G = GROUND
% B = BASE, F = FOLLOWER, CG = CENTER OF GRAVITY
% M = MASS, I = INERTIA


% GRAVITY = [0 0 0];
GRAVITY = [0 -9.81 0];


input = [-.5 1 0];

kp = 25;
ki = 15;
kd = 10;


%----

G_P = [0 0 0];
G_L = [.6 0 0];

P1_M = 1;
P1_I = eye(3);
P1_B = G_P;
P1_F = [1 0 0];
P1_CG = (G_P+G_L)/2;

L1_M = 1;
L1_I = eye(3);
L1_B = G_L;
L1_F = L1_B + [1 0 0];
L1_CG = (G_P+G_L)/2;

C1_M = 1;
C1_I = eye(3);
C1_Ba = [.4 .8 0];
C1_Bb = [.4 .8 0];
C1_Fa = C1_Ba + [-.2 .2 0];
C1_Fb = C1_Bb + [0 .2 0];
C1_CG = (G_P+G_L)/2;
C1_ang = [0 0 (atan2(C1_Ba(1),C1_Ba(2)))];


P2_M = 1;
P2_I = eye(3);
P2_B = C1_Fb;
P2_F = P2_B+ [-.4 .2 0];
% P2_CG = (G_P+G_L)/2;

L2_M = 1;
L2_I = eye(3);
L2_B = C1_Fa;
L2_F = L2_B + [-.4 .15 0];
% L2_CG = (G_P+G_L)/2;

C2_M = 1;
C2_I = eye(3);
C2_Ba = L2_F;
C2_Bb = P2_F;
C2_Fa = C2_Ba + [-.1 0 0];
C2_Fb = C2_Bb + [-.1 0 0];
% C2_CG = (G_P+G_L)/2;

P3_M = 1;
P3_I = eye(3);
P3_B = C2_Fb;
P3_F = P3_B + [-.3 0 0];
% P3_CG = (G_P+G_L)/2;

L3_M = 1;
L3_I = eye(3);
L3_B = C2_Fa;
L3_F = L3_B + [-.3 -.25 0];
% L3_CG = (G_P+G_L)/2;

C3_M = 1;
C3_I = eye(3);
C3_Ba = L3_F;
C3_Bb = P3_F;
C3_F = C3_Ba + [-.01 -.01 0];
% C3_Fb = [-.3 -.3 0];
% C3_CG = (G_P+G_L)/2;

BUCKET_B = C3_F;
BUCKET_F = BUCKET_B + [0 0 0];
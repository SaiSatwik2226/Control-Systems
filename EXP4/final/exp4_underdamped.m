num=[10]
den=[1 2 10]
sys=tf(num,den)
t=0:0.1:20
[Wn Z P]=damp(sys)
Wn=Wn(1)
Z=Z(1)
step(sys,t,'r')
title('Under damped Second order System Response for Step Input')
grid on
stepinfo(sys)
num=[10]
den=[1 12.6 10]
sys=tf(num,den)
t=0:0.1:20
step(sys,t,'m')
title('Over Damped Second Order System Response for Step Input')
grid on
stepinfo(sys)

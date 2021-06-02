num=[10]
den=[1 0 10]
t=0:0.1:20
sys=tf(num,den)
step(sys,t,'g')
title('Undamped Second Order System Response for Step Input')
grid on
stepinfo(sys)

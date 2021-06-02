num=[10]
den=[1 7.32 10]
sys=tf(num,den)
t=0:0.1:20
step(sys,t)
title('Critically Damped Second Order System Response for Step Input')
grid on
stepinfo(sys)
G=tf(num,den)
[Wn Z P] = damp(G);
Wn=Wn(1);
Z=Z(1);
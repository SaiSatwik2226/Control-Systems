num3= [10];
den3=[1 7.32 10];
figure(3);
step(num3, den3,t)
stepinfo(tf(num3,den3))
title('Critically Damped Second Order System Response for Step Input');
grid on; 
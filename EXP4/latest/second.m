num2=[10];
den2=[1 0 10];
figure(2);
step(num2,den2,t)
stepinfo(tf(num2,den2))
title('Undamped Second Order System Response for Step Input');
grid on;
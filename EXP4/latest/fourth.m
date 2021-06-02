num4= [10];
den4= [1 12.6 10];
figure (4);
step (num4, den4, t)
stepinfo(tf(num4,den4))
title ('Over Damped Second Order System Response for Step Input');
grid on; 
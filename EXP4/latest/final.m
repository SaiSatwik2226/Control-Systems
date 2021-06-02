numf= [10];
denf= [1 2 10];
figure (4);
step (numf, denf, t)
stepinfo(tf(numf,denf))
title ('Over Damped Second Order System Response for Step Input');
grid on; 
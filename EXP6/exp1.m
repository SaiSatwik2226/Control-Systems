num= [80 400];
den= [1 50 0 0];
sys=tf(num,den)
rlocus (sys);
pole(sys)
zero(sys)
y=[-100,100];
x=[-22.5 -22.5];
line(x,y,'Color','black','LineStyle','--')
hold on
plot(-22.5,0,'*'); % centroid point plotting.
% breakaway points plotting.
plot(-12.5,0,'*');
plot(-20,0,'*');
plot(0,0,'*');
hold off
%step(feedback(sys,-1));

clear ;
close all;

 s = serialport("COM4",115200,"Timeout",1);
cont=1;
while(1)
data = read(s,10,"uint8")

end

% ph_1=pi*12/18;
% ph_incr=pi*2*65/10e3;
% angle=0;
% counter=1;
% an_b=angle+ph_1;
% an_c=angle+2*ph_1
% while(counter<155)
%     va(counter)=(sin(angle));
%     vc(counter)=(sin(an_b));
%     vb(counter)=(sin(an_c));
%     counter=counter+1;
%     angle=angle+ph_incr;
%     an_b=angle+ph_1;
%     an_c=angle+2*ph_1;
% end
%     stem(va)
% 
%     hold on
%     stem(vb)
%     hold on
%     stem(vc)




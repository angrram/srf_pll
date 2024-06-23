clear s;
close all;
s = serialport("COM4",115200,"Timeout",1);
cont=1;
while(1)
data = read(s,1,"double")
% stem(cont,data)
% cont=cont+1;
% if (cont==1e3)
%     cont=1;
% end
% hold on
end

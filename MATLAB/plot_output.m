filename = 'output2.dat'

data = dlmread(filename);

t = 1:length(data);

figure
%plot(t,data(:,1),'r',t,data(:,2));
ax1 = subplot(2,1,1); % top subplot
plot(t,data(:,1),'c',t,data(:,3),'m');
ax2 = subplot(2,1,2); % bottom subplot
plot(t,data(:,2),'c',t,data(:,4),'m');


xlabel('Samples')
ylabel('Voltage /uV')


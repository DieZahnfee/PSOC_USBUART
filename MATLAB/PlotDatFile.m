function [ ] = plot_data( filename )
%just a simple function to plot data out of .dat files

data = dlmread(filename);

t = 1:length(data);

figure
ax1 = subplot(2,1,1); % top subplot
plot(t,data(:,1),'c',t,data(:,3),'m'); % plot raw  and cutted data
ax2 = subplot(2,1,2); % bottom subplot
plot(t,data(:,2),'c',t,data(:,4),'m'); % plot the software and the hardware-filtered signal


xlabel('Samples')
ylabel('Voltage /uV')


end
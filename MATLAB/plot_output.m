filename = 'output.dat'

data = dlmread(filename);

t = 1:length(data);

plot(t,data(:,1),t,data(:,2),t,data(:,3));
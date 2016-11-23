function [data] = PSoCGetData( portname, time )

  minutes = int32(time);


  NUM_OF_SAMPLES = 5580*minutes;

  psoc = serial(portname, 'BaudRate', 115200, 'InputBufferSize', 45);
%  psoc.BytesAvailableFcnCount = 45;
%  psoc.BytesAvailableFcnMode = 'byte';
%  psoc.BytesAvailableFcn = @instrcallback;

  data = zeros(4,1);

  fopen(psoc);

  for i=1:NUM_OF_SAMPLES
    data(:,i) = fscanf(psoc,'%e');
  end

  fclose(psoc);
  delete(psoc);
  clear psoc;

  data = transpose(data);

end

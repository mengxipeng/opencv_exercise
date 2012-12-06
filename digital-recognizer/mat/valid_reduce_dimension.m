


% this script validate the function pca_reduce_dimension

% prepare the data

% construct a M*2 matrix for test, integer type
M=100;
data_set = single(int32(rand(M,2)*1000)); % convert to single type for opencv library


% calculate the pca reducing using c function
c_reduce_data_set = pca_reduce_dimension(data_set, 1);

% using matlab function 
[coeff, score]=princomp(data_set);




%axis equal
hold on;
plot(c_reduce_data_set,'-b');
plot(score(:,1),'-g');
hold off;





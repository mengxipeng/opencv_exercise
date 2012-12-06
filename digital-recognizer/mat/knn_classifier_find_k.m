
% read the test data;

tic;

%train_set_s = importdata('Data/train.csv', ',', 1);

% train_set=single(train_set_s.data(1:100,:));
train_set=single(train_set_s.data);

num_of_sample = size(train_set,1);


num_of_train = int32(num_of_sample*.8);
num_of_valid = num_of_sample - num_of_train;

ordlist = randperm(num_of_sample);
train_feature = train_set(ordlist(1:num_of_sample),2:end);
train_label   = train_set(ordlist(1:num_of_sample),1);
valid_feature = train_set(ordlist(num_of_train+1:num_of_sample),2:end);
valid_label   = train_set(ordlist(num_of_train+1:num_of_sample),1);

hit=[];
for k=1:32;
  k
  knn_valid_label = knn_classifier(train_feature, train_label, valid_feature, k);
  hit(k) = sum(knn_valid_label==valid_label);

end

[~, maxk]=max(hit);
maxk

toc



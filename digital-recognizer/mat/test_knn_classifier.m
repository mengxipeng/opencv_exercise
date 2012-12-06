
% read the test data;

tic;
%{
train_set_s = importdata('Data/train.csv', ',', 1);
test_feature_s = importdata('Data/test.csv', ',', 1);
%}

train_set=single(train_set_s.data(1:100,:));
test_feature=single(test_feature_s.data(1:100,:));

train_feature = train_set(:,2:end);
train_label   = train_set(:,1);

% test_label = knn_classifier(train_feature, train_label, test_feature, 10);
test_label = knnclassify(test_feature,train_feature, train_label, 10);

% compare the output data
c_test_label  = csvread('Data/test_knn_classifier_output.csv');

sum(abs(c_test_label(:)-test_label(:)))

toc


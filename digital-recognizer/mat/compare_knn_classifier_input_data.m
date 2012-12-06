
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

%test_label = knn_classifier(train_feature, train_label, test_feature, 10);

% compare the input data
c_train_feature = csvread('Data/test_knn_classifier_input_train_feature.csv');
c_train_label   = csvread('Data/test_knn_classifier_input_train_label.csv');
c_test_feature  = csvread('Data/test_knn_classifier_input_test_feature.csv');

sum(abs(c_train_feature(:)-train_feature(:)))
sum(abs(c_train_label  (:)-train_label  (:)))
sum(abs(c_test_feature (:)-test_feature (:)))

%test_label

toc





% import the data
%{
train_set = importdata('Data/train.csv');
train_label = train_set.data(:,1);
train_feature = train_set.data(:,2:end);
%}

[train_feature_coeff train_feature_score] = princomp(train_feature);

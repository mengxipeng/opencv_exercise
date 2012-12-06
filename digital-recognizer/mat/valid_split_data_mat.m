
addpath(genpath('../mex'));

close all;


mat=importdata('../data/train.csv', ',', 1);
mat=mat.data(1:10,:);
feature=importdata('../data/digital_recognizer_feature.csv', ',', 0);
feature=feature.data(1:10,:);
label=importdata('../data/digital_recognizer_label.csv', ',', 0);
label=label.data(1:10,:);

figure;

hold on;
plot(mat(1,:),'r*');
plot(feature(1,:),'g*');
plot(label(1,:),'b*');
hold off;


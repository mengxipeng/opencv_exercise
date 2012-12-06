
%addpath('/mnt/disk0/ref/mexopencv');

% import the data
tic;
%{
train_set = importdata('Data/train.csv');
train_label = train_set.data(:,1);
train_feature = train_set.data(:,2:end);
%}
toc

%tic;
%[train_feature_coeff train_feature_score] = princomp(train_feature);
%pca=cv.PCA(train_feature);
%toc

%{
a=0;
pca_mean=read_yaml('pca_mean.yml');
pca_eigenvalues=read_yaml('pca_eigenvalues.yml');
pca_eigenvectors=read_yaml('pca_eigenvectors.yml');
read_yaml('pca_mean.yml')
%}

% reconstruct 
%{
a = [         ...
    1 1;      ...
    2 2;      ...
    3 6;      ...
    5 7;      ...
    ];
[pca_coef pca_score]=princomp(a);
ndim=1;
reconstructed = repmat(mean(a,1),size(a,1),1) + pca_score(:,1:ndim)*pca_coef(:,1:ndim)'; 
reconstructed
%}


% f=csvread('Data/train.csv');

%{
a = [         ...
    1 1;      ...
    2 2;      ...
    3 6;      ...
    5 7;      ...
    ];
rows=size(a,1);
cols=size(a,2);
b=a-repmat(mean(a,1),[rows 1]);
c=cov(b);
ndim=1;
[score eff]=eig(c);
r = repmat(mean(a,1),size(a,1),1) + [ b*score(:,1:ndim) repmat(0, rows, cols-ndim)]; 
%}
%reconstructed


% PCA (using covariance method)

%{

% M -- number of variables
% N -- number of observations
% L -- number of dimension reduced L<M
X=[ 1 2 3 4 5 6 7; 
    2 5 7 9 11 15 17 ];
M=size(X,1);
N=size(X,2);

% calculate the empirical mean
empirical_mean_vector = mean(X,2);

% calculate the deviations form the mean
B = X-repmat(empirical_mean_vector,1,N);

% find the covariance matrix
C = B*B';

% find the eigenvectors and eigenvalues of covariance matrix
[V D]=eig(C);

% sorting the eigenvectors, and rearrange the  eigenvectors
eigenvectors = diag(D);
[~,ord]=sort(eigenvectors);
ord_eigenvalues=eigenvectors(ord(end:-1:1));
cumsum(ord_eigenvalues);

% find the covariance cumulative energy 
V=V(:,ord(end:-1:1));

L=1;
% select the subset of the eigenvectors
W=V(:,1:L);

% the result
R=V'*B;
R;


close all;
figure;
hold on;
line_handle=line(X(1,:),X(2,:)); set(line_handle,'color', [1 0 0]);
line_handle=line(R(1,:),R(2,:)); set(line_handle,'color', [0 0 1]);

% RR=V*[R(1,:) ];
% R0 = R;
% R0(2:end,:)=0;
% B0=V*R0;
% 

B0=V'*X;
line_handle=line(B0(1,:),B0(2,:)); set(line_handle,'color', [0 1 0]);
axis equal;
hold off;

%}

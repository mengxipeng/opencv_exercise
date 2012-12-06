

% read the input vector

A = csvread('Data/test_input.csv');

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
R=W'*B;
R;

c_r=csvread('Data/test_output.csv');

c_r - R'




#include "common.h"

cv::Mat pca_analysis(const cv::Mat& mat)
{
  cv::PCA pca(mat, cv::Mat(), CV_PCA_DATA_AS_ROW, mat.cols) ;  
  return pca.eigenvectors.clone();
}

// dimension reduce with pca
cv::Mat pca_reduce_dimension(const cv::Mat& mat, const cv::Mat& eigenvectors, int k)
{
  cv::Mat result;
	// if(k>mat.cols)
	// {
	// 	debug_info("k is too large, k = %d cols=%d", k, mat.cols);
	// 	exit(-1);
	// }
  // 
  // //cv::Mat mean          = pca.mean.clone();
  // //cv::Mat eigenvalues   = pca.eigenvalues.clone();

  // // normalize the matrix to zero mean
  // cv::Mat normaled_mat;
  // int rows=mat.rows;
  // cv::subtract(mat, cv::repeat(mean, rows, 1), normaled_mat); 

  // cv::Mat V_transpose;
  // cv::transpose(eigenvectors.colRange(0,k), V_transpose);

  // result = normaled_mat * eigenvectors.colRange(0,k);
  
	return result;
}


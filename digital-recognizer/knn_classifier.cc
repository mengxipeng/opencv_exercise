
#include "mex.h"
#include "common.h"
#include "MxArray.hpp"

#include <opencv2/core/core.hpp>
#include <vector>

// function   respond   =  knn_classifier ( feature, label, test,  k );
void mexFunction( int nlhs, mxArray *plhs[],
                  int nrhs, const mxArray *prhs[] )
{
  if(nrhs!=4)
    mexErrMsgTxt("error:wrong number of arguments");

  std::vector<MxArray> rhs(prhs,prhs+nrhs);

  cv::Mat train_feature = rhs[0].toMat();
  cv::Mat train_label   = rhs[1].toMat();
  cv::Mat test_feature  = rhs[2].toMat();
  int k                 = rhs[3].toInt();

  // dump_mat_info("train_feature", train_feature);
  // dump_mat_info("train_label  ", train_label  );
  // dump_mat_info("test_feature ", test_feature );

  cv::Mat test_label;
  test_label = knn_classifier(train_feature, train_label, test_feature, k);

  //dump matrix
  if(nlhs>0)
    plhs[0] = MxArray(test_label);
}

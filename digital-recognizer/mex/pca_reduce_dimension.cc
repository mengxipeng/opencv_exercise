
#include "common.h"
#include "MxArray.hpp"

// function   respond   =  pca_reduce_dimension( mat,  k );
void mexFunction( int nlhs, mxArray *plhs[],
                  int nrhs, const mxArray *prhs[] )
{
  if(nrhs!=2)
    mexErrMsgTxt("error:wrong number of arguments");

  std::vector<MxArray> rhs(prhs,prhs+nrhs);

  cv::Mat mat  = rhs[0].toMat();
  int k        = rhs[1].toInt();

  cv::Mat matr;
  matr = pca_reduce_dimension(mat, k);

  //dump matrix
  if(nlhs>0)
    plhs[0] = MxArray(matr);
}

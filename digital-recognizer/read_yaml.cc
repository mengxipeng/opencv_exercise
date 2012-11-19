
#include "mex.h"
#include "MxArray.hpp"

#include <opencv2/core/core.hpp>

void mexFunction( int nlhs, mxArray *plhs[],
                  int nrhs, const mxArray *prhs[] )
{
  if(nlhs>1 || nrhs!=1)
    mexErrMsgTxt("error:wrong number of arguments");

  //
  // mexPrintf("nlhs= %d\n", nlhs);

  const char* fn = mxArrayToString(prhs[0]);
  mexPrintf("fn= %s\n",fn);

  cv::Mat mat;
  cv::FileStorage fs(fn, cv::FileStorage::READ);
  fs["value"]>>mat;
  fs.release();


  //dump matrix
  mexPrintf("mat.rows= %d\n",mat.rows);
  mexPrintf("mat.cols= %d\n",mat.cols);

  if(nlhs>0)
    plhs[0] = MxArray(mat);


}

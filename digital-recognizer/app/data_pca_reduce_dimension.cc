//
//  main.c
//  test_mac_console
//
//  Created by mengxipeng on 9/11/12.
//  Copyright (c) 2012 mengxipeng. All rights reserved.
//

#include "common.h"

#define S 80

int data_pca_reduce_dimension(const char* src, const char* dst, int s)
{
  // get the feature and label
  cv::Mat mat = read_csv2mat(src);
	//cv::Mat reduced = pca_reduce_dimension(mat, s);

  // write the result to file 
	// write_max2csv(reduced, dst);
  return 0;
}

int main(int argc, const char * argv[])
{
  debug_info("start program");
  // cv::Mat eigenvectors = pca_analysis
  // data_pca_reduce_dimension( DATA_DIR"/digital_recognizer_train_feature.csv", DATA_DIR"/pca_reduce"STR(S)"_digital_recognizer_train_feature.csv", S);
  // data_pca_reduce_dimension( DATA_DIR"/digital_recognizer_test_feature.csv", DATA_DIR"/pca_reduce"STR(S)"_digital_recognizer_test_feature.csv", S);
  debug_info("finished");
  return 0;
}


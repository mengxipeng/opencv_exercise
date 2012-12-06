//
//  main.c
//  test_mac_console
//
//  Created by mengxipeng on 9/11/12.
//  Copyright (c) 2012 mengxipeng. All rights reserved.
//

// this program read the train and test data to generate the prediction result

#include "common.h"

#define NUMS_TRAIN_SET 42000
#define NUMS_TEST_SET 28000
#define NUMS_PIXS 28
#define NUMS_FEATURE_SET (NUMS_PIXS*NUMS_PIXS)
#define K 10


#define TRAIN_FILE_FN DATA_DIR"/train.csv"
#define TEST_FILE_FN DATA_DIR"/test.csv"
#define RESULT_FILE_FN DATA_DIR"/result.csv"

int digitial_recognizer_knn(int k)
{

  int ret;
  // read the train set
  const cv::Mat train_feature = read_csv2mat(DATA_DIR"/digital_recognizer_train_feature.csv");
  const cv::Mat train_label   = read_csv2mat(DATA_DIR"/digital_recognizer_train_label.csv");
  const cv::Mat test_feature  = read_csv2mat(DATA_DIR"/digital_recognizer_test_feature.csv");

  cv::Mat test_label = knn_classifier(train_feature, train_label, test_feature, k);

  char fn[200];
  sprintf(fn,RESULT_DIR"/digital_recognizer_output_test_label_knn_%d.csv",k);

  write_max2csv_int(test_label, fn);
  return 0;
}

int digitial_recognizer_knn_using_pca_reduce(int k)
{
  const cv::Mat train_feature = read_csv2mat(DATA_DIR"/pca_reduce80_digital_recognizer_train_feature.csv");
  const cv::Mat train_label   = read_csv2mat(DATA_DIR"/digital_recognizer_train_label.csv");
  const cv::Mat test_feature  = read_csv2mat(DATA_DIR"/pca_reduce80_digital_recognizer_test_feature.csv");

  cv::Mat test_label = knn_classifier(train_feature, train_label, test_feature, k);

  char fn[200];
  sprintf(fn,RESULT_DIR"/pca_reduce80_digital_recognizer_output_test_label_knn_%d.csv",k);

  write_max2csv_int(test_label, fn);

  return 0;
}


int main(int argc, const char * argv[])
{
  debug_info("start program");


  //digitial_recognizer_knn(3);
  digitial_recognizer_knn_using_pca_reduce(3);

  debug_info("finished");

  return 0;
}


//
//  main.c
//  test_mac_console
//
//  Created by mengxipeng on 9/11/12.
//  Copyright (c) 2012 mengxipeng. All rights reserved.
//

#include <stdio.h>
#include <unistd.h>
#include <sys/time.h>

#include <opencv/cv.h>
#include <opencv/ml.h>

#include "rwcsv.h"
#include "utils.h"


#ifdef __LINUX__
#define DATA_DIR "Data"
#else
#define DATA_DIR "/Users/mengxipeng/Documents/life/kaggle/digit-recognizer/Data"
#endif


#define NUMS_TRAIN_SET 42000
#define NUMS_TEST_SET 28000
#define NUMS_PIXS 28
#define NUMS_FEATURE_SET (NUMS_PIXS*NUMS_PIXS)
#define K 10


#define STR_EXPAND(tok) #tok
#define STR(tok) STR_EXPAND(tok)
#define TRAIN_FILE_FN DATA_DIR"/bin_train.csv"
#define DATA_FILE_FN DATA_DIR"/test.csv."STR(NUMS_TEST_SET)
#define RESULT_FILE_FN DATA_DIR"/result.csv"

int train_label[NUMS_TRAIN_SET];
int train_feature[NUMS_TRAIN_SET*NUMS_FEATURE_SET];
int test_feature[NUMS_TRAIN_SET*NUMS_FEATURE_SET];

// recognise digital
int recognise_digital()
{
  CvMat* cm_train_label=cvCreateMat(NUMS_TRAIN_SET,1, CV_32FC1);
  CvMat* cm_train_feature=cvCreateMat(NUMS_TRAIN_SET, NUMS_FEATURE_SET, CV_32FC1);
  read_train_set_tomax((char*)TRAIN_FILE_FN, cm_train_label, cm_train_feature,0);
  print_current_time("read data "DATA_FILE_FN);
  CvMat* cm_test_feature=cvCreateMat(NUMS_TEST_SET, NUMS_FEATURE_SET, CV_32FC1);
  read_test_set_tomax((char*)DATA_FILE_FN, cm_test_feature); 

  // test knn algorithm in opencv

  print_current_time("get k");
  CvKNearest knn(cm_train_feature, cm_train_label);
  printf("maximum k: %d\n", knn.get_max_k());
  
  print_current_time("find_nearest");
  CvMat* cm_test_result=cvCreateMat(NUMS_TEST_SET,1,CV_32FC1);

#if 0
  for(int k=1;k<=40;k++)
  {
    print_current_time("k=%d",k);
    static char s[200];
    knn.find_nearest(cm_test_feature, k, cm_test_result);
    sprintf(s,RESULT_FILE_FN".%d",k);
    write_result_csv(cm_test_result, s);
  }
#else
  int k=10;
    print_current_time("k=%d",k);
    static char s[200];
    knn.find_nearest(cm_test_feature, k, cm_test_result);
    sprintf(s,RESULT_FILE_FN".%d",k);
    write_result_csv(cm_test_result, s);
#endif

  cvReleaseMat(&cm_test_result);
  cvReleaseMat(&cm_train_label);
  cvReleaseMat(&cm_train_feature);
  cvReleaseMat(&cm_test_feature);
  return 0;
}

int main(int argc, const char * argv[])
{
  print_current_time("start program");
  print_current_time("read data");

  print_current_time("finished");

  return 0;
}


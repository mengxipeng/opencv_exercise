
#ifndef __UTILS__
#define __UTILS__

#include <opencv2/core/core.hpp>

#ifdef __cplusplus
extern "C" {
#endif

// print the debug informat
#define debug_info(fmt, args...)                                            \
do{                                                                         \
  struct timeval tv;                                                        \
  if( gettimeofday( &tv, NULL ) == -1 )                                     \
  {                                                                         \
    perror( "gettimeofday" );                                               \
    exit(-1);                                                               \
  }                                                                         \
  time_t timenow=tv.tv_sec;                                                 \
  struct tm* tmnow = localtime(&timenow);                                   \
  char time_sbuf[64];                                                       \
  strftime(time_sbuf, sizeof time_sbuf, "%Y-%m-%d %H:%M:%S",tmnow);         \
  fprintf(stdout,"%s:%ld", time_sbuf, tv.tv_usec);                          \
  fprintf(stdout,"[%s:%d]",__FILE__,__LINE__);                              \
  fprintf(stdout,fmt,##args);                                               \
  fprintf(stdout,"\n");                                                     \
  fflush(stdout);                                                           \
}                                                                           \
while(0)


// the function to write a max to a file of csv extension
int write_max2csv(const cv::Mat& mat, const char* fn);
int write_max2csv_int(const cv::Mat& mat, const char* fn);
std::vector<int> random_permutation_generator(int len);
std::vector<int> random_permutation_generator_sorting(int len);
int dump_mat_info(const char* name, const cv::Mat& mat);
cv::Mat read_csv2mat(const char* fn, int header=0);

#ifdef __cplusplus
}
#endif

#endif



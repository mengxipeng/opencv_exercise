

#include <stdio.h>
#include <sys/time.h>
#include <time.h>
#include <stdarg.h>


#include "utils.h"

#if 0

// this is debug function, use to print some debug information
int debug_info(const char* mess,...)
{
  struct timeval tv;
  if(mess)
  {
    va_list vl;
    va_start(vl,mess);
    vfprintf(stdout,mess,vl);
    fprintf(stdout,"\n");
    va_end(vl);
  }
  if( gettimeofday( &tv, NULL ) == -1 )
  {
    perror( "gettimeofday" );
    return -1;
  }
  time_t timenow=tv.tv_sec;
  struct tm* tmnow = localtime(&timenow);
  char time_sbuf[64];
  strftime(time_sbuf, sizeof time_sbuf, "%Y-%m-%d %H:%M:%S",tmnow);
  fprintf(stdout,"at %s:%ld\n", time_sbuf, tv.tv_usec);
  fflush(stdout);
  return 0;
}

#endif
int write_max2csv(const cv::Mat& mat, const char* fn)
{
  return 0;
}




#include <stdio.h>
#include <sys/time.h>
#include <stdarg.h>

int print_current_time(const char* mess,...)
{
  struct timeval tv;
  if( gettimeofday( &tv, NULL ) == -1 )
  {
    perror( "gettimeofday" );
    return -4;
  }
  if(mess)
  {
    va_list vl;
    va_start(vl,mess);
    vfprintf(stdout,mess,vl);
    fprintf(stdout,"\n");
    va_end(vl);
  }
  fprintf(stdout,"tm %ld %d\n", tv.tv_sec, tv.tv_usec);
  fflush(stdout);
  return 0;
}


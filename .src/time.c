#include "../.inc/time.h"
#include <time.h>

void FetchTime(TimeHandler *time_handler, int isLocal) {
  time_handler->now = time(NULL);

  if (isLocal) {
    time_handler->time_ptr = *localtime(&time_handler->now);
  } else {
    time_handler->time_ptr = *gmtime(&time_handler->now);
  }

  time_handler->year = time_handler->time_ptr.tm_year + 1900;
  time_handler->month = time_handler->time_ptr.tm_mon + 1;
  time_handler->date = time_handler->time_ptr.tm_mday;
  time_handler->hour = time_handler->time_ptr.tm_hour;
  time_handler->minute = time_handler->time_ptr.tm_min;
  time_handler->second = time_handler->time_ptr.tm_sec;
}

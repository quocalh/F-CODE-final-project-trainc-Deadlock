#include "../.inc/time.h"
#include <time.h>

void FetchTime(TimeHandler *time_handler, int isLocal) {
  if (isLocal) {
    time_handler->now = time(NULL);
  }
  time_handler->time_ptr = localtime(&time_handler->now);
}
int getYear(TimeHandler *time_handler) {
  return time_handler->time_ptr->tm_year + 1900;
}
int getMonth(TimeHandler *time_handler) {
  return time_handler->time_ptr->tm_mon + 1;
}
int getDate(TimeHandler *time_handler) {
  return time_handler->time_ptr->tm_mday;
}
int getHour(TimeHandler *time_handler) {
  return time_handler->time_ptr->tm_hour;
}
int getMinute(TimeHandler *time_handler) {
  return time_handler->time_ptr->tm_min;
}
int GetSecond(TimeHandler *time_handler) {
  return time_handler->time_ptr->tm_sec;
}

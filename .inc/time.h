#ifndef TIME_H
#define TIME_H
#include <time.h>

typedef struct {
  time_t now;
  struct tm *time_ptr;
  int year;
  int month;
  int date;
  int hour;
  int minute;
  int second;
} TimeHandler;

void FetchTime(TimeHandler *time_handler, int isLocal);
int GetYear(TimeHandler *time_handler);
int GetMonth(TimeHandler *time_handler);
int GetDate(TimeHandler *time_handler);
int GetHour(TimeHandler *time_handler);
int GetMinute(TimeHandler *time_handler);
int GetSecond(TimeHandler *time_handler);

#endif

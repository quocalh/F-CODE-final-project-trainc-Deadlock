#ifndef TRANSACTION_H
#define TRANSACTION_H

#include "../.inc/time_handler.h"

typedef struct {
  TimeStamp time_stamp;
  int ProductID;
} Transaction;

#endif

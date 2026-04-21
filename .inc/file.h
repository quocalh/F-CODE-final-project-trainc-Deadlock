#ifndef FILE_H
#define FILE_H

#include <stdio.h>

typedef struct {
  char file_name[100];
  FILE file_ptr;
} FileHandling;

void openFile(FileHandling *file_handling);
void readFile(FileHandling *file_handling);
void writeFile(FileHandling *file_handling);
void appendFile(FileHandling *file_handling);
void closeFile(FileHandling *file_handling);

#endif

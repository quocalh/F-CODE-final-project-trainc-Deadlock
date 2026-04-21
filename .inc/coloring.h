#ifndef COLOR_H
#define COLOR_H

#include <windows.h>

enum Color {
  RED,
  GREEN,
  BLUE,
  YELLOW,
};

typedef struct {
  int mode;
} ColoringSystem;

void BindColor(enum Color color);
void UnbindColor();

#endif

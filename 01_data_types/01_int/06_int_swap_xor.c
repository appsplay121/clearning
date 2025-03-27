#include <stdio.h>

int main() {
  int x = 7, y = 12; // Fixed values for now

  x = x ^ y;
  y = x ^ y;
  x = x ^ y;

  printf("After swap: x = %d, y = %d\n", x, y);

  return 0;
}

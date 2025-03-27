#include <limits.h> //Include limits.h to check int range
#include <stdio.h>

int main() {
  printf("Minimum value of int: %d\n", INT_MIN);
  printf("Maximum value of int: %d\n", INT_MAX);
  printf("Size of int: %lu bytes\n", sizeof(int));

  return 0;
}

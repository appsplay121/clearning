#include <stdio.h>

int multiply(int a, int b) {
  int result = 0;
  for (int i = 0; i < b; i++) {
    result = result + a; // Add `a` to result `b` times
  }

  return result;
}
int main() {
  int x = 4, y = 0; // Fixed values for now
  printf("%d * %d = %d\n", x, y, multiply(x, y));

  return 0;
}

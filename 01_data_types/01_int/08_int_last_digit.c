#include <stdio.h>

int main() {
  int num = 1234;            // Fixed Values for now
  int last_digit = num % 10; // Extract last digit

  printf("Last digit: %d\n", last_digit);

  return 0;
}

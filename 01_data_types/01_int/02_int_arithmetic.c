#include <stdio.h>

int main() {
  int a = 15, b = 4;

  printf("Addition: %d + %d = %d\n", a, b, a + b);
  printf("Subtraction: %d - %d = %d\n", a, b, a - b);
  printf("Multiplication: %d * %d = %d\n", a, b, a * b);
  printf("Division: %d / %d = %d\n", a, b, a / b);
  printf("Modulus (Remainder): %d %% %d = %d\n", a, b, a % b);

  return 0;
}

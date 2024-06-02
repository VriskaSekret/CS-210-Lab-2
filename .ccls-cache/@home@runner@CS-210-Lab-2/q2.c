#include <stdio.h>

int q2main(void) {
  int n = 1;
  printf("pentagonal_numbers(%d) = %d\n", n, pentagonal_numbers(n));
  n = 2;
  printf("pentagonal_numbers(%d) = %d\n", n, pentagonal_numbers(n));
  n = 3;
  printf("pentagonal_numbers(%d) = %d\n", n, pentagonal_numbers(n));
}

int pentagonal_numbers(int n) {
  if (n == 1) {
    return 1;
  } else if (n == 2) {
    return 5;
  } else {
    return 2 * pentagonal_numbers(n - 1) - pentagonal_numbers(n - 2) + 3;
  }
}
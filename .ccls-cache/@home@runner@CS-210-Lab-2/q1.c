#include <stdio.h>

int q1main(void) {
  int array1[4] = {1, 2, 3, 4};
  int array2[4] = {5, 6, 7, 8};
  printf("Result: %d\n", array_calculation(array1, array2, 4));
}

int array_calculation(int *array1, int *array2, int size) {
  int i;
  int tempa[size];
  int out = 0;
  for (i = 0; i < size; i++) {
    tempa[i] = *(array1 + i) * *(array2 + i);
  }
  for (i = 0; i < size; i++) {
    out += tempa[i];
  }
  return out;
}
#include <stdio.h>
#include <string.h>

void get_letters(char *letters, int number);

int q4main() {
  char letters[10];
  int number;
  memset(letters, '\0', 10);
  scanf("%d", &number);
  get_letters(letters, number);
  printf("%s\n", letters);
  return 0;
}

void get_letters(char *letters, int number) {
  for (int i = 0; i < number; i++) {
    scanf(" %c", &letters[i]);
  }
}
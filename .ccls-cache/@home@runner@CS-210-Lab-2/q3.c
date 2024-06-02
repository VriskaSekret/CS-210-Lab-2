#include <stdio.h>

void swap_cases(char *text) {
  int isValid = 1;
  for (int i = 0; isValid == 1; i++) {
    if (text[i] >= 'a' && text[i] <= 'z') {
      putchar(toupper(text[i]));
    } else if (text[i] >= 'A' && text[i] <= 'Z') {
      putchar(tolower(text[i]));
    } else if (text[i] == '\0') {
      isValid = 0;
    } else {
      putchar(text[i]);
    }
  }
  putchar('\n');
}

int q3main(void) {
  char text[100] = "Hello World";
  printf("Before: %s\n", text);
  printf("After: ");
  swap_cases(text);
  printf("Done!\n");
}
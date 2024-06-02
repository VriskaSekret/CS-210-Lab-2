#include <stdio.h>

int process_file(char* filename, char words[20][15]){
  FILE *fptr;
  fptr = fopen(filename, "r");
  int i = 0;
  while (fscanf(fptr, "%14s", words[i]) != EOF)
  {
    i++;
  }
  return i+1;
}


int main(void){
  char filename[15] = "Words1.txt";
  char words[20][15];
  int count = process_file(filename, words);
  for (int i = 0; i < count; i++) {
      printf("%s\n", words[i]);
  }
}
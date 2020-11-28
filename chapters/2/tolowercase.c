#include <stdio.h>

#define MAX 100

/* Convert all uppercase characters in the input to lowercase characters*/
int main () {
  char line[MAX];
  int c;
  int index = 0;

  while ((c=getchar()) != EOF && c != '\n') {
    line[index++] = (c >= 'A' && c <= 'Z') ? (c - 'A' + 'a') : c;
  }
  line[index] = '\0';

  printf("%s\n", line);
  return 0;
}

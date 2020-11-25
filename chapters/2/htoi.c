#include <stdio.h>
#include <ctype.h>
#define MAX 100

int isHexadecimal(char c);

int main () {
  char c;
  char line[MAX];
  int n = 0;
  while ((c=getchar()) && isHexadecimal(c)) {
    line[n++] = c;
  }
  line[n] = '\0';  /* Append null character so string is properly terminated */
  printf("%s\n", line);
  return 0;
}

int isHexadecimal (char c) {
  if (isdigit(c) || (c >= 'a' && c <= 'f') || (c >= 'A' && c <= 'F')) {
    return 1;
  }
  return 0;
}

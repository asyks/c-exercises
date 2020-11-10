#include <stdio.h>

#define TABSTOP 8

/* Replace tabs with spaces */
int main() {
  int i, c, n;
  for (i=0; (c=getchar()) != EOF; ++i) {
    if (c == '\t') {
      i = TABSTOP - i;
      for (n=0; n <= i; n++) {
        putchar(' ');
      i = 0;
      }
    }
    putchar(c);
  }
  printf("\n");
  return 0;
}

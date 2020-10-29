# include <stdio.h>

/* separate input words onto separate lines */
int main()
{
  int c;
  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t') {
      putchar('\n');
    }
    else {
      putchar(c);
    }
  }
  return 0;
}

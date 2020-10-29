# include <stdio.h>

/* count the number of input lines */
int main()
{
  int c;
  int nl = 0;
  while((c = getchar()) != EOF) {
    if (c == '\n') {
      ++nl;
    }
  }
  printf("%d \n", nl);
  return 0;
}

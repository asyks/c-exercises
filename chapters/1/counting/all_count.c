# include <stdio.h>

/* count characters by type */
int main()
{
  long c, ch, nl, t;

  nl = 0;
  t = 0;
  for(ch = 0; (c = getchar()) != EOF; ++ch) {
    if (c == '\n') {
      ++nl;
    }
    if (c == ' ') {
      ++t;
    }
  }
  printf("characters:%ld newlines:%ld whitespace:%ld \n", ch, nl, t);
  return 0;
}

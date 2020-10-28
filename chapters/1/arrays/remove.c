#include <stdio.h>
#define MAXLINE 1000

/* replace tabs with spaces */
int main()
{
  int c;
  while((c = getchar())) {
    if (c == EOF) {
      break;
    }
		if (c == '\t') {
			putchar(' ');
		}
    else {
			putchar(c);
    }
  }
  return 0;
}

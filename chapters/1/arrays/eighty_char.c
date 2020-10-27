#include <stdio.h>
#define EIGHTY 80
#define MAX 1000

int countLineChars(void);

/* count the number of lines over 80 characters */
int main()
{
  int lineChars;
  int linesOverEighty = 0;
	while ((lineChars = countLineChars()) > 0) {
		if (lineChars > EIGHTY) {
			++linesOverEighty;
		}
  }
  printf("Number of eighty character lines: %d\n", linesOverEighty);

	return 0;
}

int countLineChars()
{
	int c;
  int i = 0;
  while((c = getchar())) {
    if (c == EOF || c == '\n') {
      return i;
    }
    i++;
  }
  return 0;
}

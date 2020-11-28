#include <stdio.h>

#define MAX 100
#define TRUE 1
#define FALSE 0

int countChars();

/* Count the number of characters in the input line */
int main () {
	int i;

	i = countChars();
	printf("%d\n", i);
  return 0;
}

int countChars() {
  int e = FALSE;
  int i=0;
  int c;
  while (e == FALSE) {
    if (i >= MAX || (c=getchar()) == EOF || c == '\n') {
      e = TRUE;
    }
    else {
      ++i;
    }
  }
  return i;
}

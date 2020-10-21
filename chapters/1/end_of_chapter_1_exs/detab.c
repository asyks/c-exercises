#include <stdio.h>
#define TABSTOP 8 

void count(void);

main() {
  int c;
	count();
	return 0;
}

void count() {
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
	printf("\n\0");
}

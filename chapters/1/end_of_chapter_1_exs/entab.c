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
		if (i >= 8) {
			i = 1;
		}
		for (n=0; c == '\t' || c == ' '; ++i) { 
			if (c == '\t') {
				i += n += TABSTOP - i;	
			}
			if (c == ' ') {
				n += 1;	
			}
			printf("%d",n);
			c = getchar();
		}
		putchar(c);
	}
	printf("\n\0");
}

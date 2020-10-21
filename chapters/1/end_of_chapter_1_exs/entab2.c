#include <stdio.h>
#define TABSTOP 8 

int count(void);
int space(int i, int n);

main() {
  int c;
	while (count() != 0);
	return 0;
}

int count() {
	int i, n, b, c;
	b = '\0';
	for (i=n=0; (c=getchar()) != EOF && c != '\n'; ) {	
		if (i >= 8 || c == '\n') {
			i = 0;
		}
		if (c == '\t') {
			i += n += TABSTOP - i;	
		}
		else if (c == ' ') {
			i += n += 1;	
		}
		else if (b == '\t' || b == ' ') {
			n = space(i, n);
			putchar(c);
			++i;
		}
		else {
			putchar(c);
			++i;
		}
		b = c;
	}
	printf("\n\0");
	if (c == EOF) {
		return 0;
	}
}

int space(int i, int n) {
//	printf("\n i:%d, n:%d \n\0", i, n);
	if (i == 0) {
		putchar('\t');
	}
	else {
		while (n > 0) {
			putchar(' ');
			--n;
		}
	}
  n = 0;
	return n;
}

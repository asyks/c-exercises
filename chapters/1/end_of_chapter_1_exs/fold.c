#include <stdio.h>
#define MAXLENGTH 20 

int count(void);

main() {
	while (count() != 0);
	return 0;
}

int count() {
	int i, c;
	for (i=0; (c=getchar()) != EOF; ++i) {
		if (i >= MAXLENGTH && (c == '\t' || c == ' ')) {
			c = '\n';
		}
		if (c == '\n') {
			i = 0;
		}
		putchar(c);
	}
	printf("\n\0");
	return 0;
}

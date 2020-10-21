#include <stdio.h>

int rmcomments(void);

main() {
	while (rmcomments() != 0);
	return 0;
}

int rmcomments() {
	int i, b, c;
	b = '\0';
	for (i=0; (c=getchar()) != EOF; ++i) {
		if ((b=c) == '/' && (c=getchar()) == '*') {
			while (b != '*' && (c=getchar()) != '/') {
				b = c;
			}
		}
		else {
			putchar(c);
		}
	}
	printf("\n\0");
	return 0;
}

#include <stdio.h>
#define MAX 10
#define MIN 0

main () {
	const char c = 'a';
	putchar(c);
	test_int();
}

test_int() {
	int i=MIN, c;
	for (i; i <= MAX; ++i) {
		printf("%d", i);
	}
	printf("\n\0");
}

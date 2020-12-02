#include <stdio.h>

#define MAX 10
#define MIN 0

void test_int();

int main () {
	test_int();

  return 0;
}

void test_int() {
	int i;

	for (i=MIN; i <= MAX; ++i) {
		printf("%d\n", i);
	}
}

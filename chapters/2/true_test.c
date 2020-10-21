#include <stdio.h>

main () {
	int i = 1 > 0;
	if (i) {
		printf("this is true\n\0");
	}
}

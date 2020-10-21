#include <stdio.h>

int countbits (unsigned int x);

int main (int argc, char *argv[]) {
	unsigned x;
	int b;
	x = argv[1];
	b = countbits(x);
	printf("%d\n", b);
	return b;
}

int countbits (unsigned int x) {
	int b;
	for (b=0; x != 0; x >>= 1) {
		if (x & 01) {
			b++;
		}	
	}
	return b;
}

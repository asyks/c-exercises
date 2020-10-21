#include <stdio.h>

int getbits(int x, int p, int n);

int main(int argc, char *argv[]) {
	int x,p,n,r;
	if (argc) {
		x = argv[1];
		p = argv[2];
		n = argv[3]
		r = getbits(x,p,n);
	}
	printf("%d\n\0", r);	
}

int getbits(int x,int p, int n) {
	return (x >> (p+1-n)) & ~(~0 << n);
}

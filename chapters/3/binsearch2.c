#include <stdio.h>

int getlist(int out[], int ilist[]);
int binsearch(int find, int list[], int len);
int convertargs(int len, char argv[], int ilist[]);

int main(char argv[1]) {
	int x, r, n, out[2], ilist[100];
	while (getlist(out, ilist) != 0);
	x = out[0];	
	n = out[1];	
	r = binsearch(x, ilist, n);
	printf("%d\n", r);
}

int getlist(int out[], int ilist[]) {
	int c, i;
	for (i=0; (c=getchar()) != EOF && c != '\n'; ++i) {
		if (i == 0) {
			out[0] = c;
		} 
		ilist[i] = c - 0;
	}
	out[1] = i;
	return 0;
}

int binsearch(int x, int v[], int n) {
	int low, high;
	low = 0;
	high = n - 1;
	while (low <= high) {
		if (x < v[high]) {
			high -= 1;
		}
		else
			return high;
	}
	return -1;
}

int convertargs(int len, char argv[], int ilist[]) {
	int x, i;
	for (i=1; i < len - 1; ++i) {
		printf("%d\n", (argv[i] - 0));
		if (i == 1) {
			x = (argv[i] - 0);
		}
		else {
			ilist[i] = (argv[i] - 0);	
		}
	}
	return x;
}

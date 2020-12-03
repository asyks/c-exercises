#include <stdio.h>
#include <time.h>

int getlist(int out[], int ilist[]);
int binsearch(int find, int list[], int len);
int convertargs(int len, char argv[], int ilist[]);

int main(int argc, char *argv[1]) {
	int x, r, n, out[2], ilist[100];
	clock_t start, stop;
	double t = 0.0;
	start = clock();
	while (getlist(out, ilist) != 0);
	x = out[0];	
	n = out[1];	
	r = binsearch(x, ilist, n);
	printf("%d\n", r);
	stop = clock();
	t = (double)(stop-start)/CLOCKS_PER_SEC;
	printf("run time: %f\n", t);
  return 0;
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
	int low, high, mid;
	low = 0;
	high = n - 1;
	while (low <= high) {
		mid = (low + high) / 2;
		if (x < v[mid]) {
			high = mid - 1;
		}
		else if (x > v[mid]) {
			low = mid + 1;	
		}
		else
			return mid;
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

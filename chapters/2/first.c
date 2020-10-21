#include <stdio.h>
#define MAX 100

main() { 
	char s2[MAX];
	int occurance, s2len;
	s2len = countline(s2);
  occurance = findfirst(s2, s2len);
	printf("%d\n\0", occurance);
}

int countline(char s2[MAX]) {
	int i, c;
	for (i=0; (c=getchar()) != EOF && c != '\n'; ++i) {
		s2[i] = c;	
	}	
	return i;
}

int findfirst(char s2[MAX], int s2len) {
	int i, c, n;
	for (i=0; (c=getchar()) != EOF; ++i) {
		for (n=0; n <= s2len; ++n) {	
			if (c == s2[n]) {
				return i;
			}
		}
	}
	return -1;
}

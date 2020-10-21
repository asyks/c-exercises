#include <stdio.h>
#define MAX 100

main() { 
	char s1[MAX], s2[MAX];
	int s2len;
	s2len = countline(s2);
  while (deletematch(s1, s2, s2len) != 0);
	printf("%s\n\0", s1);
}


int countline(char s2[MAX]) {
	int i, c;
	for (i=0; (c=getchar()) != EOF && c != '\n'; ++i) {
		s2[i] = c;	
	}	
	return i;
}

int deletematch(char s1[MAX], char s2[MAX], int s2len) {
	int i, c, n, match;
	for (i=0; (c=getchar()) != EOF; ++i) {
		match = 1;
		for (n=0; n <= s2len && match; ++n) {	
			if (c == s2[n]) {
				match = 0;
			}
		}
		if (match) {
			s1[i] = c;
		}
	}
	return 0;
}

#include <stdio.h>
#include <ctype.h>
#define MAXLINE 1000

int getline(char line[], int max);
int strindex(char source[], char searchfor[], int len);

char pattern[] = "ould";

int main() {
	char line[MAXLINE];
	int len, found = 0;

	while ((len = getline(line, MAXLINE)) > 0) {
		if (strindex(line, pattern, len) >= 0) {
			printf("%s", line);
			found++;
		}
	}
	printf("%d\n", found);
	return found;
}

int getline(char s[], int lim) {
	int c, i;

	i = 0;
	while (--lim > 0 && (c=getchar()) != EOF && c != '\n') {
		s[i++] = c;
	}
	if (c == '\n') {
		s[i++] = c;
	}
	s[i] = '\0';
	return i;
}

int strindex(char s[], char t[], int len) {
	int i, j, k;

	for (i = len; i >= 0; i--) {
		for (j=i, k=3; s[j] == t[k]; j--, k--) {
			;
		}	
		if (k <= 0) {
			return i;
		}
	}
	return -1;
}

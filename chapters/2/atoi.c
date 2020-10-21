#include <stdio.h>

void makeline(char s[]);
int atoi(char s[]);

main() {
	int i;
	char s[1000];
	makeline(s);
	i = atoi(s);
	printf("%d\n\0", i);
}

void makeline(char s[]) {
	int i, c;
	for (i = 0; (c=getchar()) != EOF && c != '\n'; ++i) {
		s[i] = c;
	}
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
}

int atoi(char s[]) {
	int i, n;
	n = 0;
	for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i) {
		n = 10 * n + (s[i] - '0');
	}
	return n;
}

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define FIELDWIDTH 10

void itoa(int n, char s[], int fieldWidth);
void reverse(char s[]);

int main() {
  int i, n;
	char c, s[1000];
  for (i = 0; (c = getchar()) != EOF && c != '\n'; i++) {
		n = 10 * n + (c - '0');
	}
  itoa(n, s, FIELDWIDTH);
  printf("%s\n", s);
	return 1;
}

void itoa(int n, char s[], int f) {
	int i, sign;
	if ((sign = n) < 0)
		n = -n;
	i = 0;
	do {
		s[i++] = n % 10 + '0';
	} while ((n /= 10) > 0);
	if (sign < 0) {
		s[i++] = '-';
	}
  while (i < f) {
		s[i++] = ' ';
	}
	s[i] ='\0';
	reverse(s);
}

void reverse(char s[]) {
	int c, i, j;
	for (i = 0, j = strlen(s) - 1; i < j; i++, j--) {
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}

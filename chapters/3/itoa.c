#include <stdio.h>
#include <ctype.h>
#include <string.h>

void itoa(int n, char s[]);
void getArgs(int argc, char argv[], int args[]);
void reverse(char s[]);

int main(int argc, int *argv[1]) {
  int i, args[1000];
	char s[1000];
  /* getArgs(argc, *argv, args); */
  /* i = args[1]; */
	i = argv[1]
  	printf("%d\n\0", i);
  /* itoa(i, s); */
  /* printf("%s", s); */
	return 1;
}

void getArgs(int argc, char argv[], int args[]) {
	int n;
  char arg;
	for (n = 0; n < argc; n++) {
    if (isdigit((arg = argv[n]))) {
			args[n] = arg;
		}
	}
}

void itoa(int n, char s[]) {
	int i, sign;

	if ((sign = n) < 0)
		n = -n;
	i = 0;
	do {
		s[i++] = n % 10 + '0';
	} while ((n /= 10) > 0);
	if (sign < 0)
		s[i++] = '-';
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

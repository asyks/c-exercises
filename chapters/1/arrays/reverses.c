#include <stdio.h>

int countLine(char l[]);
void reverseLine(char to[], char from[], int len);

int main()
{
	int len;
  char list[100];
	char reverse[100];

	while ((len=countLine(list)) > 0) {
		reverseLine(reverse, list, len);
		printf("%s \n", reverse);
	}
	return 0;
}

int countLine(char l[])
{
	int i, c;

	for (i = 0; (c=getchar()) != EOF && c != '\n'; ++i) {
		if (c == ' ' || c == '\b')
			l[i] = ' ';
		l[i] = c;
	}
	if (c == '\n') {
		l[i] = c;
		++i;
	}
	return i;
}

void reverseLine(char to[], char from[], int len)
{
	int i, n;

  i = 0;
	while ((n = len - i) > 0) {
		if (from[n] == '\n' || from[n] == '\0')
			;
		else
			to[i] = from[n];
		++i;
	}
}

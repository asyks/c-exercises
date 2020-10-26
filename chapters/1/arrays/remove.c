#include <stdio.h>
#define MAXLINE 1000

int countLine(char l[]);

int main()
{
	int len;
  char list[MAXLINE];

	while ((len=countLine(list)) > 0) {
		printf("%s \n", list);
	}
	return 0;
}

int countLine(char l[])
{
	int i, c;

	for (i = 0; (c=getchar()) != EOF && c != '\n'; ++i) {
		if (c == '\t') {
			c = ' ';
		}
		l[i] = c;
	}
	l[i] = '\0';
	return i;
}

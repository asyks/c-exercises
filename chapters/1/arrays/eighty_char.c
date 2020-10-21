#include <stdio.h>
#define EIGHTY 80
#define MAX 1000

int getLine(char line[]);
int copy(char to[], char from[], int spot);

/* print longest input line */
main()
{
	int len;		/* curent line length */
	int lines;		/* number of lines whose length is > 80 */
	int spot;		/* the place in longest where the last entry ends */
	char line[MAX];		/* current input line */
  char longest[MAX];	/* longest line saved here */

	while ((len = getLine(line)) > 0)
		if (len > EIGHTY) {
			++lines;
			spot = copy(longest, line, spot);
		}
	if (lines > 0)	/* there was a line */
		printf("eighty character lines: %d\n %s \n", lines, longest);
	return 0;
}

/* getLine: read a line into s, return length */
int getLine(char s[])
{
	int c, i;

	for (i=0; (c=getchar())!=EOF && c!='\n'; ++i)
		s[i] = c;
	if (c == '\n')	{
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

/* copy 'from' into 'to'; assume to is big enough */
int copy(char to[], char from[], int s)
{
	int i;

	i = 0;
	while ((to[s + i] = from[i]) != '\0')
		++i;
	s = s + i;
	return s;
}

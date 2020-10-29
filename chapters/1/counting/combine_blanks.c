# include <stdio.h>

/* combine sequential empty characters */
int main()
{
	int c;
	int b = '\0'; /* '\0' is the null operator */
	while ((c = getchar()) != EOF) {
		if(c == ' ') {
			b = c;
		}
		else {
		  putchar(b);
			putchar(c);	
			b = '\0';
		}
	}
  return 0;
}

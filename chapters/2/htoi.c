#include <stdio.h>
#include <ctype.h>
#define MAX 100

int checkval();
int gethexadecimals ();

main () {
	while(gethexadecimals() != 0);
}

int checkval () {
	unsigned int i, c;
	int line[MAX];
	for (i=0; (c = getchar()) != EOF && c != '\n'; ++i) {
		line[i] = c;		
	}
	printf("%d\n\0", line - '0');	
  return 0;
}

int gethexadecimals () {
	int i, n;
	char c;
  char line[MAX];
	for (n=i=0; (c=getchar()) != EOF; ++i) {
			putchar(c);
		if (isdigit(c) || (c>='a' && c<='f') || (c>='A' && c<='F')) {
			line[n++] = c;	
		}		
	}
	printf("%s\n\0", line);	
  return 0;
}

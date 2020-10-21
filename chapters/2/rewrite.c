#include <stdio.h>
#define LIM 100
#define TRUE 1
#define FALSE 0

int count(char l[LIM]);
int alt_count(char l[LIM]);

main () {
	int i;
	char list[LIM];
	i = alt_count(list);
	printf("%d \n\0", i);
}

int alt_count(char l[LIM]) {
	int i=0, c, e=FALSE;
	while (e == FALSE) {
		if (i>LIM-1) {
			e = TRUE;
		}
		else if (c=getchar() == '\n') {
			e = TRUE;
		}
		else if (c == EOF) {
			e = TRUE;
		}
		else {
			l[i] = c;	
			++i;
		}
	}
	l[i] = '\0';
	return i;
}

int count(char l[LIM]) {
	int i, c;
	for (i=0; i<LIM-1 && (c=getchar()) != '\n' && c != EOF; ++i) {
		l[i] = c;
	}
	l[i] = '\0';
	return i;
}

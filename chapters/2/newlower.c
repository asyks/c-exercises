#include <stdio.h>
#define MAX 100

int makeline(char line[MAX]);

int main () {
	char line[MAX];
	while (makeline(line) != 0); 
	printf("%s", line);
	return 0;
}

int makeline(char line[MAX]) {
	int i, c;
	for (i = 0; (c=getchar()) != EOF; ++i) {
		line[i] = (c >= 'A' && c <= 'Z') ? (c + 'a' - 'A') : c;
	}
	line[i] = '\0';
	return 0;
}

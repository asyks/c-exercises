#include <stdio.h>
#define MAX 100

int getLine(char t[]);
void escape(char s[],char t[],int i);

int main () {
	int i;
	char t[MAX], s[MAX];
	while ((i = getLine(t)) > 0) {
		escape(s,t,i);
		printf("%s", s);
	}
	return 0;
}

int getLine(char t[]) {
	int i, c;
	for (i=0; (c=getchar()) != EOF && c != '\n'; ++i) {
		t[i] = c;
	}
	if (c == '\n') {
		t[i++] = '\n';
	}
	return i;
}

void escape(char s[],char t[],int i) {
	int n, m;
	char c;
	for (m=n=0; n <= i; n++) {
			c = t[m++];
		if (c == '\t') {
			s[n++] = '\\';
			s[n] = 't';
			i++;
		}
		else if (c == '\n') {
			s[n++] = '\\';
			s[n] = 'n';
			i++;
		}
		else {
			s[n] = c;
		}
	}
	s[n++] = '\n';
	s[n] = '\0';	
}

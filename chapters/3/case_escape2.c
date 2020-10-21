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
	char b, c;
	for (m=n=0; n <= i;) {
		b = t[m++];
		switch(b) {
			case '\\':
				c = t[m++];
				switch(c) {
					case 't':
						s[n++] = '\t';
						break;
					case 'n':
						s[n++] = '\n';
						break;
					default:
						s[n++] = b, s[n++] = c;
						break;
				}
				break;
			default:
				s[n++] = b;
				break;
		}
	}
	s[n++] = '\n', s[n] = '\0';	
}

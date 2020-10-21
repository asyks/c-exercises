#include <stdio.h>
#include <ctype.h>
#define MAX 100

int getLine(char t[]);
int isDgtOrChr(char c);
void expand(char s[], char t[], int i);

int main () {
	int i;
	char t[MAX], s[MAX];
	while ((i = getLine(t)) > 0) {
		expand(s,t,i);
		printf("%s", s);
	}
	return 0;
}

int getLine(char t[]) {
	int i, c;
	for (i=0; (c=getchar()) != EOF && c != '\n'; i++) {
		t[i] = c;
	}
	t[i] = '\n';
	return i;
}

int isDgtOrChr(char c) {
	if (isalpha(c) || isdigit(c)) {
		return 1;
	}
	else {
		return 0;
	}
}

void expand(char s[], char t[], int i) {
	int n, m, p;
	char b;
	for (m=n=0; m <= i && t[m] != '\n';) {
		if (t[m+1] == '-' && isDgtOrChr(t[m]) && isDgtOrChr(t[m+2])) {
			for (b=t[m], p=0; b <= t[m+2] - 1; p++) {
				s[n+p] = b++;
			}
			n += p, m += 2;
		}
		else {
			s[n++] = t[m++];
		}
	}
	s[n++] = '\n';
	s[n] = '\0';
}

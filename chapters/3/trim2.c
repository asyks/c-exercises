#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define FIELDWIDTH 10

int trim(char s[], char t[]);

int main() {
  int i, n, len;
	char c, s[1000], t[1000];
  for (i = 0; (c = getchar()) != EOF && c != '\n'; i++) {
    s[i] = c;
		n = 10 * n + (c - '0');
	}
  len = trim(s, t);
  printf("string: %s\nlen: %d\n", t, len);
	return 1;
}

int trim(char s[], char t[]) {
  int n, i;
  for(n = strlen(s)-1; n >= 0; n--) {
    if (s[n] != ' ' && s[n] != '\t' && s[n] != '\n') {
      break;
    }
  }
  for(i = 0; i <= n; i++) {
		t[i] = s[i];
	}
  t[i+1] = '\0';
  return i;
}

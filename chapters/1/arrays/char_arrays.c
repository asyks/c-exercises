#include <stdio.h>
#include <string.h>

#define MAXLINE 1000

char* copyLine(char from[], char to[]);

int main() {
	int c;
  char currentLine[MAXLINE];
  char longestLine[MAXLINE];

  int max = 0;
  int i = 0;
  while((c=getchar()) != EOF) {
    currentLine[i] = c;
    i++;
    if (c == '\n') {
      if (i > max) {
        max = i;
        copyLine(currentLine, longestLine);
      }
      memset(currentLine, 0, sizeof currentLine);
      i = 0;
    }
    currentLine[i] = c;
  }

  printf("longest line %d characters, is: %s", max, longestLine);

  return 0;
}

char* copyLine(char from[], char to[]) {
	int i = 0;
	while ((to[i] = from[i]) != '\n')
		++i;

  return to;
}


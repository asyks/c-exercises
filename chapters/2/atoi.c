#include <stdio.h>

#define MAXSIZE 1000

void makeline(char s[]);
int atoi(char s[]);

int main() {
  char s[MAXSIZE];
  int integer;
  makeline(s);
  integer = atoi(s);
  printf("%d\n", integer);
  return 0;
}

/* collects an array of input characters until newline or EOF encountered */
void makeline(char s[]) {
  int index;
  int currentChar;
  for (index = 0; (currentChar=getchar()) != EOF && currentChar != '\n'; ++index) {
    s[index] = currentChar;
  }
}

/* converts character array of integer digits to its integer representation */
int atoi(char s[]) {
  int index;
  int integer = 0;
  for (index = 0; s[index] >= '0' && s[index] <= '9'; ++index) {
    if (index == 0 && s[index] == '0') {
      continue;
    }
    integer = 10 * integer + (s[index] - '0');
  }
  return integer;
}

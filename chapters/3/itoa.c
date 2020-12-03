#include <stdio.h>
#include <ctype.h>
#include <string.h>

int atoi(char s[]);
void itoa(int n, char s[]);
void reverse(char s[]);

/* Convert an integer to a character array */
int main(int argc, char *argv[1]) {
  int integer;
  char string[100];

  integer = atoi(argv[1]);
  itoa(integer, string);
  
  printf("%s\n", string);
  return 0;
}

/* Casts character array of integer digits to its integer representation */
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

/* Casts integer to a character array of integer digits */
void itoa(int integer, char string[]) {
  int index = 0;

  do {
    string[index++] = integer % 10 + '0';
  } while ((integer /= 10) > 0);

  string[index] ='\0';
  reverse(string);
}

/* Reverse a character array */
void reverse(char s[]) {
	int c, i, j;
	for (i = 0, j = strlen(s) - 1; i < j; i++, j--) {
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}

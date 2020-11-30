#include <stdio.h>

#define MAX 100
#define NULL_CHAR '\0'

void getString(char s[]);
void excludeOccurrences(char s[], char t[]);

int main() { 
  char substring[MAX];
  char string[MAX];

  getString(substring);
  getString(string);
  excludeOccurrences(string, substring);

  return 0;
}

void getString(char string[]) {
  char character;
  int index = 0;

  while ((character=getchar()) != EOF && character != '\n') {
    string[index++] = character;	
  }	
  string[index] = NULL_CHAR;
}

void excludeOccurrences(char string[], char subString[]) {
  int indexString = 0;
  int indexStringPrev = 0;
  int indexSubString = 0;

  while(string[indexString] != '\0') {
    indexStringPrev = indexString; /* caputure the current index before attempting match */
    while (string[indexString] == subString[indexSubString]) {
      /* if the characters match, move both indexes to the next position */
      indexString++;
      indexSubString++;
    }

    if (subString[indexSubString] != NULL_CHAR) {
      indexString = indexStringPrev; /* match not found, reset index */
      putchar(string[indexString++]); /* print character at current index, and iterate */
    }
    indexSubString = 0;
  }
  putchar('\n');
}

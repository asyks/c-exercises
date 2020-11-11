#include <stdio.h>

#define MAXSIZE 100

void readLine(char s[MAXSIZE]);
int findFirstOccurence(char pattern[MAXSIZE], char string[MAXSIZE]);

/* Find the first occurence of input string 1 in input string 2 */
int main() {
  char input1[MAXSIZE];
  char input2[MAXSIZE];
  int firstOccurence;

  readLine(input1);
  readLine(input2);
  firstOccurence = findFirstOccurence(input1, input2);

  printf("first occurence of '%s' starts at index: %d\n", input1, firstOccurence);
  return 0;
}

void readLine(char s[MAXSIZE]) {
  int index;
  int character;
  for (index=0; (character=getchar()) != EOF; ++index) {
    if (character == '\n') {
      s[index] = '\0';
      break;
    }
    s[index] = character;
  }
}

int findFirstOccurence(char pattern[], char string[]) {
  int indexString = 0;
  int indexPattern = 0;
  while (string[indexString] != '\0') {
    if (pattern[indexPattern] == '\0') {
      return indexString - indexPattern;
    }

    if (pattern[indexPattern] == string[indexString]) {
      ++indexPattern;
    }
    else {
      indexPattern = 0;
    }
    ++indexString;
  }
  return -1;
}

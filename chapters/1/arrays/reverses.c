#include <stdio.h>

int readLine(char lineArray[]);
void reverseLine(char to[], char from[], int len);

int main()
{
  int lenFrom;
  char forwardArray[100];
  char reverseArray[100];

  while ((lenFrom = readLine(forwardArray)) > 0) {
	  reverseLine(reverseArray, forwardArray, lenFrom);
  }
  printf("%s\n", reverseArray);
  return 0;
}

int readLine(char lineArray[])
{
  int i;
  int c;
	for (i = 0; (c=getchar()) != EOF && c != '\n'; ++i) {
    lineArray[i] = c;
  }
  return i;
}

void reverseLine(char to[], char from[], int lenFrom)
{
  int indexFrom;
  int indexReverse;
  int indexTo = 0;
  for (indexFrom = 0; indexFrom <= lenFrom; ++indexFrom) {
    indexReverse = lenFrom - indexFrom;
    if (from[indexReverse] != '\n' && from[indexReverse] != '\0') {
    to[indexTo] = from[indexReverse];
      ++indexTo;
    }
  }
}

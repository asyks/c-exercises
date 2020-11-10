#include <stdio.h>

#define TABSTOP 8 

void spacify(int n);

/* Replace tabs with spaces */
int main() {
  int columnNum = 0;
  int currentChar;
  int tabSpaceIndex;
  while ((currentChar=getchar()) != EOF) {	
    /* character handling */
    if (currentChar == '\t') {
      /* insert spaces until tabstop */
      int tabSpaceNum = TABSTOP - columnNum;
      for (tabSpaceIndex=0; tabSpaceIndex < tabSpaceNum; ++tabSpaceIndex) {
        ++columnNum;
        putchar(' ');
      }
    }
    else if (currentChar == '\n') {
      /* reset columnNum for every newline */
      putchar(currentChar);
      columnNum = 0;
    }
    else {
      ++columnNum;
      putchar(currentChar);
    }

    /* manage column position */
    if (columnNum == TABSTOP) {
      columnNum = 0;
    }
  }
  return 0;
}

#include <stdio.h>

/* Remove all c-style comments from the input text */
int main() {
  int c;
  int commentMarker = 0;
  int commentActive = 0;
  while ((c=getchar()) != EOF) {
    if (commentActive) {
      if (commentMarker) {
        if (c == '/') {
          commentActive = 0;
          commentMarker = 0;
          continue;
        }
      }
      else if (c == '*') {
        commentMarker = 1;
        continue;
      }
    }
    else {
      if (commentMarker) {
        if (c == '*') {
          commentActive = 1;
          commentMarker = 0;
        }
        else {
          putchar('/');
        }
      }
      else if (c == '/') {
        commentMarker = 1;
        continue;
      }

    }

    if (!commentActive) {
      putchar(c);
    }
  }
	return 0;
}

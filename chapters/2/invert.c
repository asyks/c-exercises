#include <stdio.h>

int main(int argc, char *argv[]) {
  int numArgs;
  int count;

  numArgs = argc - 1;

  printf("%s called with %d args\n", argv[0], numArgs);

  if (numArgs) {
    for(count = numArgs; count > 0; count--) {
      printf("arg %d: %s\n", count, argv[count]);
    }
  }
  return 0;
}

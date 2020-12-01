#include <stdio.h>
#include <ctype.h>

unsigned int atoi(char s[]);
int countOneBits (unsigned int i);

/* Print the number of 1 bits used to store the argument integer */
int main (int argc, char *argv[]) {
  unsigned int integer;
  unsigned int bitCount;

  integer = atoi(argv[1]); /* cast `char` to `int` */
  bitCount = countOneBits(integer);

  printf("%d\n", bitCount);
  return 0;
}

/* converts character array of integer digits to its integer representation */
unsigned int atoi(char s[]) {
  unsigned int index;
  unsigned int integer = 0;

  for (index = 0; s[index] >= '0' && s[index] <= '9'; ++index) {
    if (index == 0 && s[index] == '0') {
      continue;
    }
    integer = 10 * integer + (s[index] - '0');
  }
  return integer;
}

/* count the number of 1 bits used to store the integer */
int countOneBits (unsigned int integer) {
  unsigned int mask = 1;
  unsigned int bitCount = 0;

  while(integer != 0) {
    if (integer & mask) {
      ++bitCount; /* lowest bit is a 1, count it */
    }
    integer >>= 1;
  }

  return bitCount;
}

#include <stdio.h>
#include <ctype.h>

#define MAX 100

int hexArrayToInt(char hexArray[], int length);
int isHexChar(char c);
int charToInt(char c);
long power (int base, int exponent);

int main () {
  char c;
  char line[MAX];
  int decimal;
  int n = 0;

  while (isHexChar(c=getchar())) {
    line[n++] = c;
  }

  decimal = hexArrayToInt(line, n);

  printf("%d\n", decimal);
  return 0;
}

int charToInt(char c) {
  if (isdigit(c)) {
    return c - '0';
  }
  else {
    return tolower(c) - 'a' + 10;
  }
}

int hexArrayToInt (char hexArray[], int length) {
  int index;
  int decimal = 0;
  int position = length - 1;

  for (index = 0; index < length; index++) {
    decimal += charToInt(hexArray[index]) * power(16, position--);
  }
  return decimal;
}

int isHexChar (char c) {
  if (isdigit(c) || (c >= 'a' && c <= 'f') || (c >= 'A' && c <= 'F')) {
    return 1;
  }
  return 0;
}

long power (int base, int exponent) {
  long product = 1;

  while (exponent > 0) {
    product *= base;
    --exponent;
  }
  return product;
}

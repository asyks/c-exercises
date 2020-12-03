#include <stdio.h>

#define NUM_ARGS 1
#define SEARCH_STRING_MAX 10
#define MAX 100

void getString(char s[]);
void atoia (char s[], int a[]);
int binsearch(int find, int list[], int len);

int main(int argc, char *argv[NUM_ARGS]) {
  int search[SEARCH_STRING_MAX];
  char targetString[MAX];
  int targetArray[MAX];

  atoia(argv[1], search);
  getString(targetString);
  atoia(targetString, targetArray);

  printf("%d\n", argc);

  return 0;
}

void getString (char string[]) {
	int character;
  int index = 0;

	while ((character=getchar()) != EOF && character != '\n') {
		string[index++] = character;
	}
  string[index] = '\0';
}

/* Cast character array (string) to integer array */
void atoia (char string[], int array[]) {
  int index = 0;

  while(string[index] != '\0') {
    array[index] = string[index] - '0';
  }
}

int binsearch(int x, int v[], int n) {
	int low = 0;
	int high = n - 1;

	while (low <= high) {
		if (x < v[high]) {
			--high;
		}
		else {
			return high;
    }
	}
	return -1;
}

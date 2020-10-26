# include <stdio.h>

int main()
{

	int c, i; 
	int nchar[128];

	for (i = 0; i < 128; ++i)
		nchar[i] = 0;

	while((c = getchar()) != EOF) 
		++nchar[c - '0'];

	printf("word lengths");
	for (i = 0; i < 128; ++i) 
		printf("%2d : %d \n", i, nchar[i]);

  return 0;
}

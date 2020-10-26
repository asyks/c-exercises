# include <stdio.h>

# define IN 1
# define OUT 0

int main()
{

	int c, i, nc; 
	int nword[21];

	nc = 0;
	for (i = 0; i < 21; ++i)
		nword[i] = 0;

	while((c = getchar()) != EOF) 
		if (c == ' ' || c == '\t' || c == '\n') {
			++nword[nc];
			nc = 0;
		}
		else {
			++nc;
		}

	printf("word lengths");
	for (i = 0; i < 21; ++i) 
		printf("%2d : %d \n", i, nword[i]);

  return 0;
}

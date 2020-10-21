# include <stdio.h>

# define IN 1
# define OUT 0

main()
{

	int c, i, state, nc; 
	int nword[21];

	state = OUT;
	nc = 0;
	for (i = 0; i < 21; ++i)
		nword[i] = 0;

	while((c = getchar()) != EOF) 
		if (c == ' ' || c == '\t' || c == '\n') {
			state = OUT;
			++nword[nc];
			nc = 0;
		}
		else {
			state = IN;
			++nc;
		}

	printf("word lengths");
	for (i = 0; i < 21; ++i) 
		printf("%2d : %d \n", i, nword[i]);

}

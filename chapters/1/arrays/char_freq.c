# include <stdio.h>

# define IN 1
# define OUT 0

main()
{

	int c, i, state, nc; 
	int nchar[128];

	state = OUT;
	nc = 0;
	for (i = 0; i < 128; ++i)
		nchar[i] = 0;

	while((c = getchar()) != EOF) 
		++nchar[c - '0'];

	printf("word lengths");
	for (i = 0; i < 128; ++i) 
		printf("%2d : %d \n", i, nchar[i]);

}

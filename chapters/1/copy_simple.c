# include <stdio.h>

/* copy input ot output; 2nd version*/

main()
{
	int c;
	char end_of_file;

	while((c = getchar()) != EOF)
		putchar(c);

}

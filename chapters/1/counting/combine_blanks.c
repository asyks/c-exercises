# include <stdio.h>

main()
{

	int c;
	int b;

	b = '\0'; // '\0' is the null operator
	while ((c = getchar()) != EOF) {
		if(c == ' ') {
			b = c;
		}
		else {
		  putchar(b);
			putchar(c);	
			b = '\0';
		}
	}

}

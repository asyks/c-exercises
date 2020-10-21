# include <stdio.h>

main()
{

	long c, ch, nl, t;

	nl = 0;
	t = 0;
	for(ch = 0; (c = getchar()) != EOF; ++ch) {
		if (c == '\n') {
			++nl;
		}
		if (c == ' ') {
			++t;
		}
	}

	printf("characters:%d newlines:%d whitespace:%d \n", ch, nl, t);

}

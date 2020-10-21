# include <stdio.h>

/* Celsius table prints Celsius temperatures 
and their Farenheit equivalents*/

main() 
{
	float fahr, celsius; 
	int lower, upper, step;

  printf("Celsius \t Farenheit \n");

	lower = 20;
	upper = 280;
	step = 20;

  celsius = lower;
	while (celsius <= upper) { 
		fahr = (9.0/5.0) * celsius + 32;
  	printf("%3.0f \t\t %6.1f \n", celsius, fahr);
  	celsius = celsius + step;
	}
}

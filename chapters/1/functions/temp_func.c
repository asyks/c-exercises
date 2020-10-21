# include <stdio.h>

float to_celsius(float f);

/* print Farenheit-Celsius table
		for fahr = 0, 20, ..., 300 */

main()
{

	float fahr;
	int lower, upper, step;

  printf("%s \t %s \n","Fahrenheit","Celsius");

	lower = 0; 			/* lower limit of temperature table */
	upper = 300;		/* upper limit */
	step = 20;			/* step size */

	for (fahr = lower; fahr <= upper; fahr = fahr + step)
		printf("%3.0f \t\t %6.1f \n", fahr, to_celsius(fahr));

}

float to_celsius(float fahr)
{

	float celsius;

	celsius =  (5.0/9.0) * (fahr-32.0);
	return celsius;

}

# include <stdio.h>

float to_celsius(float f);

/* print Farenheit-Celsius table
		for fahr = 0, 20, ..., 300 */
int main()
{
  float fahr;
  int lower = 0; 			/* lower limit of temperature table */
  int upper = 300;		/* upper limit */
  int step = 20;			/* step size */
  printf("%s \t %s \n","Fahrenheit","Celsius");
  for (fahr = lower; fahr <= upper; fahr = fahr + step) {
    printf("%3.0f \t\t %6.1f \n", fahr, to_celsius(fahr));
  }
  return 0;
}

float to_celsius(float fahr)
{
  float celsius =  (5.0/9.0) * (fahr-32.0);
  return celsius;
}

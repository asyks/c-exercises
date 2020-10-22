# include <stdio.h>

/* print Fahrenheit-Celsius table */

# define LOWER 0
# define UPPER 300
# define STEP 20

int main()
{
  int fahr;

  printf("Farenheit \t Celsius \n");
	for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP) {
    printf("%3d \t\t %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
  }

  return 0;
}


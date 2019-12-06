#include <stdio.h>

/* Print a Fahrenheit-Celcius conversion table
   for temps F = 0, 20, 40, ..., 300 */

int main()
{
  int fahr, celsius;
  int lower, upper, step;

  lower = 0;    /* lower limit of temp table */
  upper = 300;  /* upper limit */
  step  = 20;   /* increment step size */

  fahr = lower;
  while (fahr <= upper) {
    celsius = 5 * (fahr-32) / 9;
    printf("%d\t%d\n", fahr, celsius);
    fahr = fahr + step;
  }
}

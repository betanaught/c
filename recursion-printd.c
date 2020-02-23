#include <stdio.h>

/* printd: print n in decimal */
/* printd(123) passes arg = 123 to itself, which passes arg = 12 to itself,
which passes arg = 1 to third-level printd, which prints 1. Second-level printd
prints 2, then first-level prints 1 and terminates */

void printd(int n)
{
  if (n < 0) {
    putchar('-');
    n = -n;
  }
  if (n / 10)
    printd(n / 10);
  putchar(n % 10 + '0');
}

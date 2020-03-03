#include <stdio.h>

/* Function to raise base number to the nth power */
int power(int m, int n);

/* First, test the power function */
int main(){
  int i;

  for (i = 0; i < 10; ++i)
    printf("%d %d %d\n", i, power(2, 3), power(-3, i));
  return 0;
}

/* Raise, base to the nth power; n >= 0 */
int power(int base, int n){
  int i, p;

  p = 1;
  for (i = 1; i <= n; ++i)
    p = p * base;
  return p;
}

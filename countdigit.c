#include <stdio.h>

/* count digits, white space, and others */
int main() {
  int c, i , nw, no;  /* nwhite, nother */
  int nd[10];         /* ndigit, array of 10 intergers */

  nw = no = 0;
  for (i = 0; i < 10; ++i)
    nd[i] = 0;
  while ((c = getchar()) != EOF)
    if (c >= '0' && c <= '9')
      ++nd[c - '0'];
    else if (c == ' ' || c == '\n' || c == '\t')
      ++nw;
    else
      ++no;
  printf("digits = ");
  for (i = 0; i < 10; ++i)
    printf(" %d", nd[i]);
  printf(", white space = %d, other = %d\n", nw, no);
}

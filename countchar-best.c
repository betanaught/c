#include <stdio.h>
int main()
{
  int nc = 0;
  for(;;)
    {
      do
	++nc;
      while (getchar() != '\n');
      printf("Character count is: %d\n", nc - 1);
      nc = 0;
    }
}

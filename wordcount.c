#include <stdio.h>

#define IN  1    /* inside a word == True */
#define OUT 0    /* inside a word == False (outside) */

/* count lines, words, and characters in input */
int main() {
  int c, nl, nw, nc, state;
  state = OUT;
  nl = nw = nc = 0;
  while ((c = getchar()) != EOF) {
    ++nc;
    if (c == '\n')
      ++nl;
    if (c == ' ' || c == '\n' || c == '\t')
      state = OUT;
    else if (state == OUT) {
      state = IN;
      ++nw;
    }
  }
  printf("%d %d %d\n", nl, nw, nc);
}

/* Must execute C-d after entering text to complete the program */

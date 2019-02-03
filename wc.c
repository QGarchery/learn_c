#include <stdio.h>

#define  IN 0
#define OUT 1

int main () {
  int state = OUT;
  int nw = 0;
  int c;

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n')
      state = OUT;
    else if (state == OUT) {
      ++nw;
      state = IN;
    }
  }
  printf ("Number of words : %d\n", nw);


}

#include <stdio.h>


int main () {
  int c, nc;

  nc = 0;

  while ( (c = getchar()) != EOF) {
    if (c == ' ')
      ++nc;
    if (c == '\t')
      ++nc;
    if (c == '\n')
      ++nc;
  }
  printf ("Number of blanks : %d\n", nc);
}

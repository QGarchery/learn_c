#include <stdio.h>

int main () {
  long nc;

  for (nc = 0; getchar() != EOF; ++nc);

  printf ("Number of characters : %ld\n", nc);
}

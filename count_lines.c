#include <stdio.h>

int main () {
  long nl;
  int c;

  nl = 0;

  while ( (c = getchar ()) != EOF) {
    if (c == '\n') {
      ++nl;
    }
  }
  printf ("Number of lines : %ld\n", nl);

  /* int c; */
  /* c = getchar (); */
  /* c = getchar (); */
  /* printf ("The last char is : %d\n", c); */
  /* printf ("'"); */
  /* putchar (c); */
  /* printf ("'\n"); */
}

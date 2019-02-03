#include <stdio.h>

int main () {
  int to_add = 18;

  int add_to_add (int n) {
    return n + to_add;
  }

  printf ("to_add = 18, add_to_add 5 : %d\n", add_to_add (5));
  to_add = 11;
  printf ("to_add = 11, add_to_add 5 : %d\n", add_to_add (5));

  return 0;
}

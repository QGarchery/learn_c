#include <stdio.h>

int power (int e, int n) {
  int i;
  int res = 1;
  for (i = 0; i < n; ++i)
    res = res * e;
  return res;
}

int main () {
  int i;

  for (i = 0; i < 5; ++i)
    printf ("%2d ^%2d : %4d\n%2d ^%2d : %4d\n", 2, i, power(2, i), -3, i, power(-3, i));
}

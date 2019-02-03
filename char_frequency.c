#include <stdio.h>

#define RANGE_CHAR 26

int main () {
  int chars[RANGE_CHAR];
  int c, code, i, j;

  for (i = 0; i < RANGE_CHAR; ++i)
    chars[i] = 0;

  while ((c = getchar()) != EOF) {
    code = c - 'a';
    if (0 <= code && code < RANGE_CHAR)
      ++chars[code];
  }

  for (i = 0; i < RANGE_CHAR; ++i) {
    putchar(i + 'a');
    putchar(' ');
    for (j = 0; j < chars[i]; ++j)
      putchar('#');
    putchar('\n');
  }
  return 0;
}

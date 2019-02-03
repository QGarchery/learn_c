#include <stdio.h>

#define MAXLEN 10

int main () {
  int occ_len[MAXLEN];
  int i, j, n, max;
  for (i = 0; i < MAXLEN; ++i) {
    occ_len[i] = 0;
  }

  int curr_len = 0;
  int c;

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n') {
      if (curr_len != 0) {
	++occ_len[curr_len];
	curr_len = 0;
      }
    } else
      ++curr_len;
  }

  max = 0;
  for (i = 0; i < MAXLEN; ++i) {
    if (occ_len[i] > max)
      max = occ_len[i];
  }

  for (i = max; 0 < i; --i) {
    for (j = 0; j < MAXLEN; ++j) {
      if (i <= occ_len[j])
	putchar('#');
      else
	putchar(' ');
      putchar(' ');
    }
    printf("\n");
  }
  for (j = 0; j < MAXLEN; ++j)
    printf("  ");
  putchar('\n');
  for (j = 0; j < MAXLEN; ++j)
    printf("%d ", j);
  putchar('\n');



}



#include <stdio.h>

#define MAX_LEN 100

int getoneline (char res[], int lim) {
  int i, c;
  for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i)
    res[i] = c;

  if (c == '\n') {
    res[i] = c;
    ++i;
  }
  res[i] = '\0';
  printf ("%d\n", the4);
  return i;
}

int length (char s[]) {
  int i;
  for (i = 0; s[i] != '\0'; ++i);
  return i + 1;
}

void reverse (char to[], char from[]) {
  int len = length (from);
  int i;

  to[len-1] = '\0';
  --len;
  if (from[len-1] == '\n'){
    to[len-1] = '\n';
    --len;
  }

  for (i = 0; i < len; ++i)
    to[i] = from[len-1-i];
}


int main () {
  int len_curr;
  char curr[MAX_LEN];
  char rev_curr[MAX_LEN];

  while ( (len_curr = getoneline(curr, MAX_LEN)) != 0 ) {
    reverse (rev_curr, curr);
    printf ("%s", rev_curr);
  }
  return 0;
}

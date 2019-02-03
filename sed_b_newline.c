#include <stdio.h>

int main () {
  int c;

  c = getchar();
  while (c != EOF) {
    if (c == '\n' || c == ' '){
      putchar('\n');
      c = getchar();
      while (c == ' ' || c == '\n') {
	c = getchar();
      }
    } else {
      putchar(c);
      c = getchar();
    }
  }

}

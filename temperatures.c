#include <stdio.h>

#define START 300
#define END     0
#define STEP  -20


float fahr_to_celc (int fahr) {
  return (5. / 9.) * (fahr - 32.);
}

int main() {
  int start;
  float celcius;

  for (start = START; start >= END; start = start + STEP) {
    celcius = fahr_to_celc (start);
    printf ("%5d %8.2f\n", start, celcius);
  }

}

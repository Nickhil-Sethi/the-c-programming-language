#include <stdio.h>
#define NUM_DIGITS 10

int main() {
  int c, i, nother, nwhite;
  int ndigits[NUM_DIGITS];

  nother = nwhite = 0;

  for (i=0; i<NUM_DIGITS; i++) {
    ndigits[i] = 0;
  }

  while ((c = getchar()) != EOF) {
    if (c >= '0' && c <= '0')
      ++ndigits[c - '0'];
    else if (c == ' ' || c == '\n' || c == '\t')
      nwhite++;
    else
      nother++;
  }
  printf("digits");
  for (i=0; i<NUM_DIGITS; i++) {
    printf(" %d", ndigits[i]);

  }
  return 0;
}

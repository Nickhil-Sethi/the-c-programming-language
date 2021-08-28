#include <stdio.h>

int main() {
  int num_blank = 0;
  int num_tab = 0;
  int num_newline = 0;

  char c;
  while ((c = getchar()) != EOF) {
    if (c == ' ') {
      num_blank++;
    }
    if (c == '\t') {
      num_tab++;
    }
    if (c == '\n') {
      num_newline++;
    }
  }

  printf("num_blank: %d\nnum_tab: %d\nnum_newline: %d\n", num_blank, num_tab, num_newline);
}

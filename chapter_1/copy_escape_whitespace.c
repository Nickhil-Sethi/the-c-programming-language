#include <stdio.h>

int is_whitespace(char c) {
  return (c == '\t' || c == '\n' || c == '\b');
}

int main(){
  char c;
  while ((c = getchar()) != EOF) {
    if (is_whitespace(c)) {
      if (c == '\n') {
        putchar('\\');
        putchar('n');
      }

      if (c == '\t') {
        putchar('\\');
        putchar('t');
      }

      if (c == '\b') {
        putchar('\\');
        putchar('b');
      }
    } else {
      putchar(c);
    }
  }
}

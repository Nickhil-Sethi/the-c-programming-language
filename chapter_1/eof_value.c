#include <stdio.h>

int main() {
  int c = (getchar() != EOF);
  if (c == 1) {
    printf("The value of (getchar() != EOF) is 1\n");
  } else {
    printf("The value of (getchar() != EOF) is 0\n");
  };
}

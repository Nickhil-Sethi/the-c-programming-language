#include <stdio.h>
#include<stdlib.h>

#define NUM_CHARS 255

void print_histogram_row(int i, int num_occurences) {
  if (num_occurences <= 0) {
      return;
  }

  printf("character %c:", i);

  for (int i = 0; i < num_occurences; i++) {
    putchar('#');
  }

  putchar('\n');
}

int main() {
  char c;
  int occurrences[NUM_CHARS];

  for (int i = 0; i < NUM_CHARS; i++) {
    occurrences[i] = 0;
  };

  while ((c = getchar()) != EOF) {
    occurrences[c]++;
  };

  for (int i = 0; i < NUM_CHARS; i++) {
    print_histogram_row(i, occurrences[i]);
  }
}

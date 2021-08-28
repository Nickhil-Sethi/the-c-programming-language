#include <stdio.h>

#define IN_NON_WHITESPACE 2
#define IN_FIRST_NON_WHITESPACE 1
#define IN_WHITESPACE 0

void put_if_char(char c) {
  if (c != EOF) {
    putchar(c);
  }
}

int state_transition(int current_state, char c) {
  if (c == ' ' || c == '\t' || c == '\n') {
    return IN_WHITESPACE;
  }

  if (current_state == IN_WHITESPACE) {
    putchar(' ');
    put_if_char(c);
    return IN_FIRST_NON_WHITESPACE;
  }

  put_if_char(c);
  return IN_NON_WHITESPACE;
}

int main() {
  char c = getchar();
  int STATE = IN_NON_WHITESPACE;

  while (c != EOF) {
    STATE = state_transition(STATE, c);
    c = getchar();
  }

  state_transition(STATE, c);
}

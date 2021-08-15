#include <stdio.h>
#define MAXLINE 1000 /* max line length */

int getinputline(char line[], int maxline);
void copy(char to[], char from[]);

int main() {
  int len;
  int max;
  char line[MAXLINE];
  char longest[MAXLINE];

  max = 0;
  while ((len = getinputline(line, MAXLINE)) > 0){
    if (len > max) {
      max = len;
      copy(longest, line);
    };
  };
  if (max  > 0) {
    printf("%d %s", max, longest);
  }
};

int getinputline(char s[], int lim) {
  char c;
  int i = 0;

  while (i < lim-1 && (c = getchar()) != EOF && c != '\n') {
    s[i] = c;
    i++;
  }

  if (c == '\n') {
    s[i] = c;
    i++;
  };

  s[i] = '\0';
  return i;
};

void copy(char to[], char from[]) {
  int i;
  for (i = 0; from[i] != '\0'; i++){
    to[i] = from[i];
  };
  to[i] = '\0';
};

#include <stdlib.h>
#include <stdio.h>

struct point {
  int x;
  int y;
};

struct rectangle {
  struct point *r;
  struct point *s;
};

struct point *makepoint(int x, int y) {
  struct point *temp = (struct point *) malloc(sizeof(struct point));
  (*temp).x = x;
  (*temp).y = y;
  return temp;
};

struct rectangle *makerectangle(struct point *r, struct point *s) {
  struct rectangle *temp = (struct rectangle *) malloc(sizeof(struct rectangle));
  (*temp).r = r;
  (*temp).s = s;
  return temp;
}

char *sprintpoint(struct point *p) {
  char *f = "Point{%d, %d}\n";
  char *s= (char *)malloc(sizeof(*f));
  sprintf(s, f, (*p).x, (*p).y);
  return s;
};

void printpoint(struct point *p) {
  char *printstring;
  printstring = sprintpoint(p);
  printf(printstring);
}

void printrectangle(struct rectangle *rect) {
  char *toplefts = sprintpoint(rect->r);
  char *lowerrights = sprintpoint(rect->s);
  printf("Rectangle{\n\t%s \t%s}\n", toplefts, lowerrights);
}
int main() {
  struct point *p = makepoint(5, 3);
  printpoint(p);

  struct point *q = makepoint(10, 22);
  struct rectangle *r = makerectangle(p, q);
  printrectangle(r);
  return 0;
}

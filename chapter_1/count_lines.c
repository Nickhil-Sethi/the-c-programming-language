#include <stdio.h>

int main() {
    int c;
    int nc = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            ++nc;
        }
    }
    printf("%d\n", nc);
}
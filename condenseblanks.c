#include <stdio.h>

/* exercise 1-9 */
int main() {
  int c, previousC;

  previousC = 0;

  c = getchar();
  while (c != EOF) {
    if (!((previousC == ' ') && (c == ' '))) {
      putchar(c);
      previousC = c;
    }
    c = getchar();
  }
}

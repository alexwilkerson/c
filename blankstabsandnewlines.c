#include <stdio.h>

/* exercise 1-8 */
int main() {
  int count, c;
  count = 0;

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\t' || c == '\t')
      count++;
  }
  printf("%d\n", count);
}

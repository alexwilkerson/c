#include <stdio.h>

/* can induce EOF in cli on UNIX w/ ctrl + D */
int main() {
  long nc;

  nc = 0;
  while (getchar() != EOF)
    ++nc;
  printf("%ld\n", nc);
}

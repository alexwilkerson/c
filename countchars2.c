#include <stdio.h>

/* can induce EOF in cli on UNIX w/ ctrl + D */
int main() {
  double nc;

  for (nc = 0; getchar() != EOF; ++nc)
    ;
  printf("%.0f\n", nc);
}

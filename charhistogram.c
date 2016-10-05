#include <stdio.h>

#define HIGH  128     /* ASCII high end */

/* exercise 1-14 */
int main() {
  int i, j, c;
  int chars[HIGH];

  for (i = 0; i < HIGH; i++)
    chars[i] = 0;

  while ((c = getchar()) != EOF) {
    chars[c]++;
  }

  for (i = 8; i < HIGH; i++) {
    if (chars[i] > 0 && ((i >= 8 && i <= 10) || i >= 32)) {
      if (chars[i] == '\b')
        printf("bs : ");
      else if (chars[i] == '\t')
        printf("ht : ");
      else if (chars[i] == '\n')
        printf("nl : ");
      else if (chars[i] == ' ')
        printf("sp : ");
      else
        printf("%2c : ", i);
      for (j = 0; j < chars[i]; j++)
        putchar('*');
      putchar('\n');
    }
  }
  
}

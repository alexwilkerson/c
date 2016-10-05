#include <stdio.h>

#define MAXLENGTH 100     /* maximum length of tested chars*/

/* print a histogram of the lengths of
 * words in its input. exercise 1-13 */

int main() {
  int i, j, c, wordlength;
  int lengths[MAXLENGTH];

  for (i = 0; i < MAXLENGTH; i++)
    lengths[i] = 0;

  wordlength = 0;

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t') {
      lengths[wordlength]++;
      wordlength = 0;
    } else {
      wordlength++;
    }
  }

  for (i = 1; i < MAXLENGTH; i++) {
    if (lengths[i] > 0) {
      printf("%3d : ", i);
      for (j = 0; j < lengths[i]; j++) {
        putchar('*');
      }
      putchar('\n');
    }
  }

}

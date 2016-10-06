#include <stdio.h>

#define LOWER   0
#define UPPER   300
#define STEP    20

float toCelsius(int f);

/* exercise 1-15 */
int main() {
  int i;

  printf("  F C\n");
  for (i = 0; i <= UPPER; i+=STEP)
    printf("%3d %.1f\n", i, toCelsius(i));
}

float toCelsius(int fahrenheit) {
  return (5.0/9.0)*(fahrenheit-32);
}

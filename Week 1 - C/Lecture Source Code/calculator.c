#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void) {
  long x = get_long("x: ");
  long y = get_long("y: ");
  double result = (double) x / (double) y;
  printf("%.20lf\n", result);
}
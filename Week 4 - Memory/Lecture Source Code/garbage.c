#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int scores[999999];
  for(int i = 0; i < 999999; i++) {
    printf("%i\n", scores[i]);
  }
}
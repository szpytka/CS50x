#include <stdio.h>
#include <stdbool.h>
#include <cs50.h>

int main(void) {
  for(int i = get_int("How many meows: "); i>0; i--) {
    printf("Meow\n");
  }
}


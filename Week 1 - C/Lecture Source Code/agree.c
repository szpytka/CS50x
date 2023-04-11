#include <stdio.h>
#include <ctype.h>
#include <cs50.h>

int main(void) {
  char c = tolower(get_char("Do you agree (y\\n)? "));

  if(c == 'y') {
    printf("Agreed.\n");
  }
  else if (c == 'n') {
    printf("Not agreed.\n");
  }
  else {
    printf("Please enter y or n.")
  }
}
#include <stdio.h>
#include <math.h>
#include <cs50.h>

int main(void) {
  printf("Hello, World!\n");
  string firstName = get_string("What's your first name?\n");
  string lastName = get_string("What's your last name?\n");
  printf("Hello, %s \%s!\n", firstName, lastName);
}
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
  string s = get_string("Before: ");
  int n = strlen(s);
  printf("After: ");
  for (int i = 0; i < n; i++) {
    printf("%c", toupper(s[i]));
  }
  printf("\n");

}
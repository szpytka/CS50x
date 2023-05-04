#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
  char *s = get_string("s: ");
  if (s == NULL) {
    return 1;
  }
  char *t = malloc(strlen(s) + 1);
  if (t == NULL) {
    return 1;
  }
  strcpy(t, s);

  if(strlen(t) > 0) {
    t[0] = toupper(t[0]);
  }

  free(t);

  printf("s: %s\n", s);
  printf("t: %s\n", t);
  return 0;
}
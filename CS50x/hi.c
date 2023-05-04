#include <stdio.h>
#include <cs50.h>

int main(void) {
  string s = "HI!";
  string t = "BYE!";
  string words[2];
  words[0] = s;
  words[1] = t;
  printf("%c %c %c\n", words[0][0], words[0][1], words[0][2]);
  printf("%c %c %c %c\n", words[1][0], words[1][1], words[1][2], words[1][3]);
  printf("%i %i %i %i\n", s[0], s[1], s[2], s[3]);
}
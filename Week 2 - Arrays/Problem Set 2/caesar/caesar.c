#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <cs50.h>

string caesar(string text, int key);

int main(int argc, string argv[]) {
  if(argc==2 && atoi(argv[1]) > 0) {
    int number = atoi(argv[1]);
    string plainText = get_string("plaintext: ");
    printf("ciphertext: %s\n", caesar(plainText, number));
    return 0;
  } else {
   printf("Usage: ./caesar key\n");
   return 1;
  }
}

string caesar(string text, int key) {
  for(int i = 0; i < strlen(text); i++) {
    if(text[i] >= 'a' && text[i] <= 'z') {
      text[i] = (((text[i] - 97) + key)%26) + 97;
    } else if (text[i] >= 'A' && text[i] <= 'Z') {
      text[i] = (((text[i] - 65) + key)%26) + 65;
    } else {
      text[i] = text[i];
    }
  }
  return text;
}
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int count_letters(string text);
int count_words(string text);
int count_sentences(string text);
int colemanAlgorithm(int numOfLetters, int numOfWords, int numOfSentences);

int main(void) {
  string text = get_string("Text: ");
  int numOfLetters = count_letters(text);
  int numOfWords = count_words(text);
  int numOfSentences = count_sentences(text);

  // test
  // printf("Letters: %i\n", count_letters(text));
  // printf("Words: %i\n", count_words(text));
  // printf("Sentences: %i\n", count_sentences(text));

  int result = colemanAlgorithm(numOfLetters, numOfWords, numOfSentences);

  if (result >= 16) {
    printf("Grade 16+\n");
  } else if (result >= 1) {
    printf("Grade %i\n", result);
  } else {
    printf("Before Grade 1...");
  }
}

int count_letters(string text) {
  int count = 0;
  char temp;
  for(int i = 0; i < strlen(text); i++) {
    temp = tolower(text[i]);
    if (temp >='a' && temp <= 'z') {
      count++;
    }
  }
  return count;
}

int count_words(string text) {
  int count = 0;
  for(int i = 0; i < strlen(text); i++) {
    if(text[i] == ' ') {
      count++;
    }
  }
  return count + 1;
}

int count_sentences(string text) {
  int count = 0;
  for(int i = 0; i < strlen(text); i++) {
    if(text[i] == 46 || text[i] == 33 || text[i] == 63) {
      count++;
    }
  }
  return count;
}

int colemanAlgorithm(int numOfLetters, int numOfWords, int numOfSentences) {
  float L = ((float) numOfLetters / numOfWords) * 100;
  float S = ((float) numOfSentences / numOfWords) * 100;
  float index = (0.0588 * L) - (0.296 * S) - 15.8;
  return round(index);
}
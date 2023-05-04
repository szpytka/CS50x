#include <stdio.h>
#include <cs50.h>

double average(int array[], int length);

int main(void) {
  const int n = get_int("How many tests' scores: ");
  int scores[n];
  for(int i = 0; i < n; i++) {
    scores[i] = get_int("Score: ");
  }

  printf("Average: %.10lf\n", average(scores, n));
}

double average(int array[], int length) {
  double result = 0;
  for (int i = 0; i < length; i++) {
    result += array[i];
  }
  return result / (double) length;
}
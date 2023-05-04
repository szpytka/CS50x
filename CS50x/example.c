#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <cs50.h>

bool luhnAlgorithm(long number);
int length(long number);

int main() {
   printf("%d\n", luhnAlgorithm(get_long("Number: ")));
}

int length(long number) {
    char str[20];
    snprintf(str, sizeof(str), "%li", number);
    int length = strlen(str);
    return length;
}

bool luhnAlgorithm(long number) {
    char str[20];
    snprintf(str, sizeof(str), "%li", number);
    int cardLength = length(number);
    int sum = 0;
    int digit = 0;
    int counter = 0;
    for (int i = cardLength - 2; i >= 0; i -= 2) {
        digit = (str[i] - '0') * 2;
        if (digit > 9) {
            digit = digit - 9;
        }
        sum += digit;
    }
    for (int i = cardLength - 1; i >= 0; i -= 2) {
        digit = str[i] - '0';
        sum += digit;
    }
    return sum % 10 == 0;
}

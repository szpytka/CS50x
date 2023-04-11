#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int firstTwoDigits(long number);
int length(long number);
bool luhnAlgorithm(long number);
string checkCard(long card, int twoDigits, int digitsLength);

int main(void) {
    long cardNumber = get_long("Number: ");
    int firstTwoNumbers = firstTwoDigits(cardNumber);
    string whatCard = checkCard(cardNumber, firstTwoNumbers, length(cardNumber));
    printf("%s", whatCard);
}

int firstTwoDigits(long number) {
    char str[20];
    sprintf(str, "%li", number);
    char first_two_chars[3];
    first_two_chars[0] = str[0];
    first_two_chars[1] = str[1];
    first_two_chars[2] = '\0';
    int first_two_digits = atoi(first_two_chars);
    return first_two_digits;
}

int length(long number) {
    char str[20];
    sprintf(str, "%li", number);
    int length = strlen(str);
    return length;
}

bool luhnAlgorithm(long number) {
    char str[20];
    snprintf(str, sizeof(str), "%li", number);
    int cardLength = length(number);
    int sum = 0;
    int digit = 0;
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

string checkCard(long card, int twoDigits, int digitsLength) {
    bool isNumberValid = luhnAlgorithm(card);
    if(digitsLength == 15 && (twoDigits == 34 || twoDigits == 37) && isNumberValid) {
      return "AMEX\n";
    } else if (digitsLength == 16 && twoDigits >=  51 && twoDigits <= 55 && isNumberValid) {
      return "MASTERCARD\n";
    } else if (digitsLength >= 13 && digitsLength <= 16 && (twoDigits - (twoDigits%10)) == 40 && isNumberValid) {
      return "VISA\n";
    }
    return "INVALID\n";
}

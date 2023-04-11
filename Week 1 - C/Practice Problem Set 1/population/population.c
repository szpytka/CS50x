#include <cs50.h>
#include <stdio.h>

int llamas(int start, int end, int years);

int main(void)
{
    // TODO: Prompt for start size
    int startSize;
    do {
        startSize = get_int("Start size: ");
    } while (startSize < 9);
    // TODO: Prompt for end size
    int endSize;
    do {
        endSize = get_int("End size: ");
    } while (endSize < startSize);
    // TODO: Calculate number of years until we reach threshold
    int result = llamas(startSize, endSize, 0);
    // TODO: Print number of years
    printf("Years: %i\n", result);
}

int llamas(int start, int end, int years) {
    if(start >= end) {
        return years;
    }
    int temp = start + (start/3 - start/4);
    return llamas(temp, end, years + 1);
}
#include <cs50.h>
#include <stdio.h>

void block(int value);

int main(void)
{
    int height;
    do {
      height = get_int("Height: ");
    } while (height < 1 || height > 8);
    for(int i = 1; i<=height; i++) {
      int temp = height - i;
      for(int j = 0; j<temp; j++) {
        printf(" ");
      }
      for(int j = 0; j<height-temp; j++) {
        printf("#");
      }
      printf("  ");
      block(height - temp);
      printf("\n");
    }
}

void block(int value) {
  for(int i = 0; i<value; i++) {
    printf("#");
  }
}
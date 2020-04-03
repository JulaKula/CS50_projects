#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height = 0;
    while (height < 1 || height > 8)
    {
        height = get_int("How tall the pyramid should be (between 1 and 8)?\n");
    }
    for (int i = 1; i <= height; i++)
    {
        int spaceCounter = height - i;
        for (int k = 1; k <= spaceCounter; k++)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("#");
        }
        printf("  ");
        for (int k = 1; k <= i; k++)
        {
            printf("#");
        }
        printf("\n");
    }
}
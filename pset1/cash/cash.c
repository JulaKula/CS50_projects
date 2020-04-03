#include <cs50.h>
#include <stdio.h>
#include <math.h>
int main(void)
{
    float dollars = -1;
    while (dollars < 0)
    {
        dollars = get_float("Change owed: ");
    }
    int coins = round(dollars * 100);
    int counter = coins / 25;
    coins %= 25;
    counter = counter + (coins / 10);
    coins %= 10;
    counter = counter + (coins / 5);
    coins %= 5;
    counter += coins;
    printf("%i\n", counter);
}
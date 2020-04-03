#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    long cardNum = get_long("Number: ");
    int counter = 0;
    string company;

    // if-else block validates if given number suits the issuer rules
    if (cardNum >= 34 * pow(10, 13) & cardNum < 35 * pow(10, 13) ||
        cardNum >= 37 * pow(10, 13) & cardNum < 38 * pow(10, 13))
    {
        company = "AMEX\n";
    }
    else if (cardNum >= 51 * pow(10, 14) & cardNum < 56 * pow(10, 14))
    {
        company = "MASTERCARD\n";
    }
    else if (cardNum >= 4 * pow(10, 12) & cardNum < 5 * pow(10, 12) ||
             cardNum >= 4 * pow(10, 15) & cardNum < 5 * pow(10, 15))
    {
        company = "VISA\n";
    }
    else
    {
        printf("INVALID\n");
        return 0;
    }
    // validates if given number match the algorithm
    while (cardNum > 0)
    {
        counter += cardNum % 10;
        cardNum /= 10;
        int digit = (cardNum % 10) * 2;
        if (digit > 9)
        {
            counter += digit % 10 + 1;
        }
        else
        {
            counter += digit;
        }
        cardNum /= 10;
    }
    if (counter % 10 == 0)
    {
        printf("%s", company);
    }
    else
    {
        printf("INVALID\n");
    }
}

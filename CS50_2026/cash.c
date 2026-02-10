#include <cs50.h>
#include <stdio.h>

// Defining coin values
#define QUARTER 25
#define DIME 10
#define NICKEL 5
#define PENNY 1

int main(void)
{
    int change, coins, total = 0;
    int values[4] = {QUARTER, DIME, NICKEL, PENNY};
    char type[4][11] = {"quarter(s)", "dime(s)", "nickel(s)", "penny(s)"};

    do
    {
        change = get_int("Input the change: ");
    }
    while (change < 1);
    printf("\n");

    // Loop for coins and change value
    for (int i = 0; i < 4; i++)
    {
        coins = change / values[i];
        printf("Change of %d coins of %s\n", coins, type[i]);
        total = total + coins;
        change = change - (coins * values[i]);
    }

    printf("Total of coins used in change: %d\n", total);
}

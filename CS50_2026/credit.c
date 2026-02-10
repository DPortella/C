#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_DIGITS 100

int sum_of_digits(int sum);
void credit_card_company(int digit, int lenght);

int main(void)
{
    int i = 0, *number = malloc(MAX_DIGITS * sizeof(int)), first_set = 0;
    int second_set = 0, total = 0;

    long int credit = get_long("Type here your credit card number: ");

    // Loop for first array
    while (credit > 0)
    {
        number[i] = credit % 10;
        credit /= 10;
        i++;
    }

    // Loop for second array
    for (int j = i - 1; j >= 0; j--)
    {
        if (j % 2 == 0)
        {
            // Rest of digits
            first_set += sum_of_digits(number[j]);
        }
        else
        {
            // Multiplying
            second_set += sum_of_digits(number[j] * 2);
        }
    }

    // Getting the total and two first digits
    total = first_set + second_set;

    int first_two_digits = number[i - 1] * 10 + number[i - 2];

    // Validating the total and identifying
    if (total % 10 == 0)
    {
        credit_card_company(first_two_digits, i);
    }
    else
    {
        printf("INVALID\n");
    }

    // Free space in memory from malloc
    free(number);
}

// Function for the sum
int sum_of_digits(int sum)
{
    int value_total = 0;
    value_total += (sum % 10) + (sum / 10);
    return value_total;
}

// Function for credit card identification
void credit_card_company(int digit, int lenght)
{
    if (digit == 35 && lenght == 16)
    {
        printf("JCB\n");
    }
    else if (digit == 37 && lenght == 15)
    {
        printf("AMEX\n");
    }
    else if (digit == 30 && lenght == 14)
    {
        printf("DINERS CLUB\n");
    }
    else if (digit == 60 && lenght == 16)
    {
        printf("DISCOVER\n");
    }
    else if ((digit == 51 || digit == 52 || digit == 22 || digit == 55) && lenght == 16)
    {
        printf("MASTERCARD\n");
    }
    else if ((digit == 40 || digit == 41 || digit == 42 || digit == 49) &&
             (lenght == 16 || lenght == 13))
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
    }
}

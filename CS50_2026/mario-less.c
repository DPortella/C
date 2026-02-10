#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height, lines, column, hash;
    do
    {
        height = get_int("Height: \n");
    }
    while (height < 1);

    // For rows
    for (lines = 1; lines <= height; lines++)
    {
        // For colunms
        for (column = (height - lines) - 1; column >= 0; column--)
        {
            printf(" ");
        }
        // Print blocks
        for (hash = 0; hash < lines; hash++)
        {
            printf("#");
        }
        printf("\n");
    }
}

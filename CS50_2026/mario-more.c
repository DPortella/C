#include <cs50.h>
#include <stdio.h>

void print_right_spaces(int height, int lines);
void print_right_hashes(int height, int lines);
void print_left_hashes(int height, int lines);

int main(void)
{

    int height, lines;
    do
    {
        // Get user prompt
        height = get_int("Qual a altura de blocos?\n");
    }
    while (height < 1 || height > 40);

    for (lines = 1; lines <= height; lines++)
    {
        print_right_spaces(height, lines);

        print_right_hashes(height, lines);

        printf(" ");
        printf(" ");

        print_left_hashes(height, lines);

        printf("\n");
    }
}

void print_right_spaces(int height, int lines)
{
    // Print spaces
    for (int column = (height - lines) - 1; column >= 0; column--)
    {
        printf(" ");
    }
}

void print_right_hashes(int height, int lines)
{
    // Print "blocks"
    for (int hashes = 0; hashes < lines; hashes++)
    {
        printf("#");
    }
}

void print_left_hashes(int height, int lines)
{
    // Blocks from the right side
    for (int more_hashes = height - lines; more_hashes < height; more_hashes++)
    {
        printf("#");
    }
}

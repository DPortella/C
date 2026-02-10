#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define WORD 2

// Setting the scores
unsigned char char_score[256] = {
    ['A'] = 1, ['B'] = 3, ['C'] = 3,  ['D'] = 2, ['E'] = 1, ['F'] = 4, ['G'] = 2,
    ['H'] = 4, ['I'] = 1, ['J'] = 8,  ['K'] = 5, ['L'] = 1, ['M'] = 3, ['N'] = 1,
    ['O'] = 1, ['P'] = 3, ['Q'] = 10, ['R'] = 1, ['S'] = 1, ['T'] = 1, ['U'] = 1,
    ['V'] = 4, ['W'] = 4, ['X'] = 8,  ['Y'] = 4, ['Z'] = 10};

int main(void)
{
    string word[WORD];
    int times = 0, total[WORD] = {0, 0};
    char upper_case;

    // Prompting for the words
    do
    {
        word[times] = get_string("Type word for player %d: ", times + 1);
        times++;

    }
    while (times < WORD);

    // Loop to separate the letters and doing the sum
    for (int j = 0; j < WORD; j++)
    {
        for (int i = 0; word[j][i] != '\0'; i++)
        {
            upper_case = toupper(word[j][i]);
            total[j] += char_score[(unsigned char) upper_case];
        }
    }

    // Comparing the scores
    if (total[0] > total[1])
    {
        printf("Player 1 wins!\n");
    }
    else if (total[0] < total[1])
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("It is a tie!\n");
    }
}

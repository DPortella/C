#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>

#define PER 100.0

int each_sentence(string text);
int each_letter(string text);
int each_word(string text);
void reading_level(int index);

int main(void)
{
    string text;
    int i;
    float index, s, L, words;

    // Getting text
    text = get_string("Type: ");

    // INumber of words
    words = each_word(text);

    // Getting the value of s
    s = (each_sentence(text) / (words + 1) * PER);

    // Getting the value of L
    L = ((each_letter(text) / (words + 1)) * PER);

    // Calculating the index
    index = 0.0588 * L - (0.296 * s) - 15.8;

    // Rounding the value
    index = round(index);

    // Getting the reading level
    reading_level(index);
}

// Iterating sentences
int each_sentence(string text)
{
    int i, total_sentences = 0;

    for (i = 0; text[i] != '\0'; i++)
    {
        if (text[i] == '.' || text[i] == '?' || text[i] == '!')
        {
            total_sentences++;
        }
    }
    return total_sentences;
}

// Iterating letters
int each_letter(string text)
{
    int total_letter = 0, i;

    for (i = 0; text[i] != '\0'; i++)
    {
        if (isalpha(text[i]))
        {
            total_letter++;
        }
    }
    return total_letter;
}

// Iterating words
int each_word(string text)
{
    int total_word = 0, i;

    for (i = 0; text[i] != '\0'; i++)
    {
        if (text[i] == ' ')
        {
            total_word++;
        }
    }
    return total_word;
}

void reading_level(int index)
{
    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %d\n", index);
    }
}

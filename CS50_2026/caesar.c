#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int is_digit(string key);
void rotate_letters(string plain, int key);

int main(int argc, string argv[])
{
    unsigned int result, key;
    string plain;

    // Verifyng if there is any arguments
    if (argc == 2)
    {
        result = is_digit(argv[1]);

        if (result == 0)
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
        else
        {
            // turning argument to integer
            key = atoi(argv[1]);

            // Getting plain text
            plain = get_string("Plain text:  ");
            rotate_letters(plain, key);
        }
    }
    else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
}

// Function to check if arguments are digits only
int is_digit(string key)
{
    bool is_it;

    for (int i = 0; key[i] != '\0'; i++)
    {
        is_it = isdigit(key[i]);
        if (is_it == 1)
        {
            is_it = 1;
        }
        else
        {
            is_it = 0;
            break;
        }
    }
    return is_it;
}

// Iterate letters in plain text
void rotate_letters(string plain, int key)
{
    char cipher;

    printf("ciphertext: ");
    for (int i = 0; plain[i] != '\0'; i++)
    {
        if (isupper(plain[i]))
        {
            cipher = 'A' + (plain[i] - 'A' + key) % 26;
            printf("%c", cipher);
        }
        else if (islower(plain[i]))
        {
            cipher = 'a' + (plain[i] - 'a' + key) % 26;
            printf("%c", cipher);
        }
        else
        {
            cipher = plain[i];
            printf("%c", cipher);
        }
    }
    printf("\n");
}

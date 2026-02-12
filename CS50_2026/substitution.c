#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int is_all_letters(string key);
int duplicate(string argument);
void error_message(void);

int main(int argc, string argv[])
{
    unsigned int result, index;
    string plain;

    // Verifyng if there is any arguments
    if (argc == 2)
    {
        char *key = argv[1];

        // Checking if key has 26 letters
        if (strlen(key) != 26)
        {
            error_message();
            return 1;
        }

        // Checking if key is all alpha
        result = is_all_letters(key);
        if (result == 0)
        {
            error_message();
            return 1;
        }

        // Checking for duplicates
        int repeat = duplicate(key);
        if (repeat == 1)
        {
            error_message();
            return 1;
        }

        plain = get_string("plaintext: ");

        printf("ciphertext: ");

        // Iterating all letters in string
        for (int i = 0; plain[i] != '\0'; i++)
        {
            if (isupper(plain[i]))
            {
                index = plain[i] - 'A';
                printf("%c", toupper(key[index]));
            }
            else if (islower(plain[i]))
            {
                index = plain[i] - 'a';
                printf("%c", tolower(key[index]));
            }
            else
            {
                printf("%c", plain[i]);
            }
        }
    }
    else
    {
        error_message();
        return 1;
    }

    printf("\n");

    return 0;
}

// Verifyng if the whole key are letters
int is_all_letters(string key)
{
    bool is_it;

    for (int i = 0; key[i] != '\0'; i++)
    {
        is_it = isalpha(key[i]);
        if (is_it == 1)
        {
            is_it = true;
        }
        else
        {
            is_it = false;
            break;
        }
    }

    return is_it;
}

// Function for duplicates
int duplicate(string argument)
{
    int seen[26] = {0};

    for (int i = 0; i < 26; i++)
    {
        int index = toupper(argument[i]) - 'A';
        printf("%d\n", index);

        if (seen[index] == 1)
            return 1;

        seen[index] = 1;
    }

    return 0;
}

// Function to print the error message
void error_message(void)
{
    printf("Usage: ./substitution key (26 characters)\n");
}

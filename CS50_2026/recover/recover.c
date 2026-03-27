#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#define BUFFER 512

int main(int argc, char *argv[])
{
    int i = 0;

    // Check command-line arguments
    if (argc != 2)
    {
        printf("Usage: ./recover <argument>\n");
        return 1;
    }

    FILE *card = fopen(argv[1], "r");
    if (card == NULL)
    {
        printf("Could not open file.\n");
        return 1;
    }

    uint8_t buffer[BUFFER];
    char filename[8];

    FILE *img = NULL;

    while (fread(&buffer, 1, BUFFER, card) == BUFFER)
    {

        // Checking for header
        if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff &&
            (buffer[3] & 0xf0) == 0xe0)
        {

            if (img != NULL)
            {
                fclose(img);
            }

            // Creating new file
            sprintf(filename, "%03i.jpg", i);
            i++;

            img = fopen(filename, "w");
        }

        // If found a new JPEG keep writing
        if (img != NULL)
        {
            fwrite(buffer, 1, BUFFER, img);
        }
    }

    // Close last file
    if (img != NULL)
    {
        fclose(img);
    }

    fclose(card);
}

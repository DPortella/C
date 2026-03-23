#include "helpers.h"
#include <math.h>
#include <stdio.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    int i, j;

    for (i = 0; i < height; i++)
    {
        for (j = 0; j < width; j++)
        {
            int r = image[i][j].rgbtRed;
            int g = image[i][j].rgbtGreen;
            int b = image[i][j].rgbtBlue;

            int grasy_scale = round((r + g + b) / 3.0);

            image[i][j].rgbtRed = grasy_scale;
            image[i][j].rgbtGreen = grasy_scale;
            image[i][j].rgbtBlue = grasy_scale;
        }
    }
    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            int sepiar = round((.393 * image[i][j].rgbtRed) + (.769 * image[i][j].rgbtGreen) +
                               (.189 * image[i][j].rgbtBlue));
            int sepiag = round((.349 * image[i][j].rgbtRed) + (.686 * image[i][j].rgbtGreen) +
                               (.168 * image[i][j].rgbtBlue));
            int sepiab = round((.272 * image[i][j].rgbtRed) + (.543 * image[i][j].rgbtGreen) +
                               (.131 * image[i][j].rgbtBlue));

            if (sepiar > 255)
                sepiar = 255;
            if (sepiag > 255)
                sepiag = 255;
            if (sepiab > 255)
                sepiab = 255;

            image[i][j].rgbtRed = sepiar;
            image[i][j].rgbtGreen = sepiag;
            image[i][j].rgbtBlue = sepiab;
        }
    }
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{

    int i, j;
    for (i = 0; i < height; i++)
    {
        for (j = 0; j < width / 2; j++)
        {
            RGBTRIPLE buffer = image[i][j];
            image[i][j] = image[i][width - 1 - j];
            image[i][width - 1 - j] = buffer;
        }
    }
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{

    // Create a copy of image
    RGBTRIPLE copy[height][width];
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            copy[i][j] = image[i][j];
        }
    }

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            int sR = 0, sG = 0, sB = 0, count = 0;

            for (int ni = -1; ni <= 1; ni++)
            {
                for (int nj = -1; nj <= 1; nj++)
                {
                    int Ni = i + ni;
                    int Nj = j + nj;

                    if (Ni >= 0 && Ni < height && Nj >= 0 && Nj < width)
                    {
                        sR += copy[Ni][Nj].rgbtRed;
                        sG += copy[Ni][Nj].rgbtGreen;
                        sB += copy[Ni][Nj].rgbtBlue;
                        count++;
                    }
                }
            }

            image[i][j].rgbtRed = round((float) sR / count);
            image[i][j].rgbtGreen = round((float) sG / count);
            image[i][j].rgbtBlue = round((float) sB / count);
        }
    }

    return;
}

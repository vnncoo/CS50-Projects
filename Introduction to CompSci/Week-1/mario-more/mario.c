#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int h;
    do
    {
        h = get_int("Height: ");
    }
    while (h < 1 || h > 8);

    for (int r = 0; r < h; r++)
    {
        for (int d = 0; d < h - r - 1; d++)
        {
            printf(" ");
        }
        for (int c = 0; c <= r; c++)
        {
            printf("#");
        }
        printf("  ");
        for (int c = 0; c <= r; c++)
        {
            printf("#");
        }
        printf("\n");
    }
}
//If you're thinking of copying the code and then submitting it, please don't. Try to understand it first cause you won't get far if you don't try to understand basic things like this

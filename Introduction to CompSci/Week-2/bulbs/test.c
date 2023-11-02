#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    int charnum = 65;
    string binary = "12345678";
    int initval = 128;
    for (int i = 0; i < 8; i++)
    {
        if (charnum >= initval)
        {
            binary[i] = 1;
            charnum = charnum - initval;
        }
        else
        {
            binary[i] = 0;
        }
        initval /= 2;
    }
    printf("Converted: %s\n", binary);
}

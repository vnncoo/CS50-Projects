#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main(void)
{
    string word = get_string("Type a Word");
    int wordcount = strlen(word);
    for (int i = 0; i < wordcount; i++)
    {
        int charnum = word[i];
    }
}
void dec_to_bin(int charnum)
{
    int binary = 12345678;
    int initval = 128;
    for (i = 0; i < BITS_IN_BYTE; i++)
    {
        if (charnum >= initval)
        {
            binary[i] = 1;
            charnum - initval;
            initval / 2;
        }
    }
}

void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}

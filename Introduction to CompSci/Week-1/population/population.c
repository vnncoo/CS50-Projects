#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int start, end;
    do
    {
        start = get_int("Start Amount: ");
    }
    while (start < 9);

    do
    {
        end = get_int("End Amount: ");
    }
    while (end < start);

    int years = 0;

    while (start < end)
    {
        int birth = (start / 3);
        int death = (start / 4);
        start = (start + birth - death);
        years++;
    }
    printf("Years: %i\n", years);
}

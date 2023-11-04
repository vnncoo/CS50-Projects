#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int s;

    do
    {
        s = get_int("Input Size: ");
    }
    while(s < 1);

    int n = 1;

    printf("%i\n", n);

    int a[s];

    for(int i = 0; i < s - 1; i++)
    {
        n = n * 2;
        printf("%i\n", n);
    }
}

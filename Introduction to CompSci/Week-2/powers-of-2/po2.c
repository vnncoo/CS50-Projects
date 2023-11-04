#include <cs50.h>
#include <stdio.h>

int main(void)

{
    int s; //size
    int n; //number

    do
    {
        s = get_int("Enter the Size: ");
    }
    while (s < 1);

    do
    {
        n = get_int("Enter a Number: ");
    }
    while (n < 1);

    int a[s];  //array

    for(int i = 0; i < s; i++)
    {
        n = (n*2);
        a[i] = n;
        printf("%i\n", n);
    }
}

#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    int aVal = 'A';
    int bVal = 'B';
    int answer = (bVal - aVal);
    printf("The answer is: %i\n", answer);
}

/*
<--bugfixing-->
h=4
a=1
i=1
o=1
hai! = 6
Oh, = 5
<--bugfixing-->
*/

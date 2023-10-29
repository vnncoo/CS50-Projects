#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string name = get_string("what's your name? ");
    int age = get_int("How old are you? ");
    string phoneNumber = get_string("What's your Phone Number? ");

    printf("Hello %s your age is %i\nPhone number: %s\n", name, age, phoneNumber );

    int calls = 3;

    if (calls < 5)
    {
        printf("Please call more often!\n");
    }
    else if (calls => 5)
    {
        printf("You call pretty often!\n");
    }
    else
    {
        printf("You have never called\n");
    }
}
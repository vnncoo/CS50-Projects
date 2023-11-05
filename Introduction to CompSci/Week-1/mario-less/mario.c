#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int h;
    // h stands for height
    do
    {
        h = get_int("Height: ");
    }
    while (h < 1 || h > 8);
    // r stands for rows
    // c stands for columns
    // d stands for dots but it couln't be submitted so I switched it to spaces
    for (int r = 0; r < h; r++)
    /*
        let's say the height is 4
        and int r / (rows) starts with 0
        if row is less than the user input of height
        it will add a row, therefore finishing one loop
    */
    {
        for (int d = 0; d < h - r - 1; d++)
        /*
            After finishing the first for loop
            The nested loop inside it will run.
            D stands for (space I changed the meaning), it makes the # stick to the right
            the logic basically states that the terminal will print ( ) blank
            if height - row - 1 is bigger than the value of d,
            the terminal will print ( ) blank
        */
        {
            printf(" ");
        }
        for (int c = 0; c <= r; c++)
        /*
            This code on the other hand is the columns of the #
            once (d < h - r - 1) condition is not met, then this code will start to initiate
            therefore making a stair like # printed on the terminal.
        */
        {
            printf("#");
        }
        printf("\n");
    }
}

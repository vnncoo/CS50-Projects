#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet

int compute_score(string word);

int points[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10, 0};

int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // TODO: Print the winner
    if (score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    else if (score2 > score1)
    {
        printf("Player 2 wins!\n");
    }
    else if (score1 == score2)
    {
        printf("Tie!\n");
    }
    printf ("Score 1 = %i\n", score1);
    printf ("Score 2 = %i\n", score2);
}

int compute_score(string word)
{
    // TODO: Compute and return score for string
    int score = 0;
    int pI;

    for (int i = 0; i < strlen(word); i++)
    {
        if (word[i] > 64 && word[i] < 91)
        {
            pI = (word[i] - 65);
        }
        else if (word[i] > 96 && word[i] < 122)
        {
            pI = (word[i] - 97);
        }
        else
        {
            pI = 26;
        }
        score = score + points[pI];
    }
    return score;
    /*
    pI stands for Point index, as per the previous lessons, letters are represented by a decimal value
    Meaning, if we get the decimal value of the letter in iteration, we can deduct 65(if caps) 97(else)
    After subtracting that, we can get the index of the POINT up top since the letters and POINTs are lined up
    */
    /*
    As you can see, I added an else statement.
    It's basically a function that sets the value to 0 if the character in iteration is not a small or big letter.
    */
}

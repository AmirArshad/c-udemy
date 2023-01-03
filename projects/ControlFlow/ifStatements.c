#include <stdio.h>
#include <stdlib.h>

int main()
{
    int score = 95;
    int big = 90;

    //if statement
    if (score > big)
        printf("Jackpot!\n");

    //if statement with multiple functions
    if (score < big)
       printf("Loser\n");
    else
    {
        printf("You win\n");
        printf("Your score is %d\n",score);
    }

    //else if example
    int number_to_test, remainder;

    printf("Enter your number to be tested: ");
    scanf("%i",&number_to_test);

    remainder = number_to_test % 2;

    if (number_to_test == 0)
        printf("the number is 0\n");
    else if (remainder == 0)
            printf("the number is even\n");
        else 
            printf("the number is odd\n");

    //The conditional operator (ternary statement)
    int x = 0, y = 9;

    x = y > 7 ? 25 : 50; //if y > 7 set to 25 otherwise 50

    printf("%d",x);

    return 0;
}
#include <stdio.h>
#include <stdbool.h>

int main()
{
    enum primaryColour {red, yellow, blue};

    enum primaryColour myColour, gregsColour;

    myColour = red;
    gregsColour = yellow;

    bool isRed = (myColour == gregsColour);
    bool isYellow = (myColour < gregsColour);

    char broiled = 'H';

    printf("%d\n",broiled);
    printf("%d\n",isRed);
    printf("%u\n",isYellow);

    return 0;
}
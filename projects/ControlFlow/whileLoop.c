#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //while loop - checks condition always before running
    int count = 1;

    while(count <= 5)
    {
        printf("%i\n",count*(6));
        count++;
    }

    //do while loop - always runs at least once before checking conditions
    int number = 4;

    do
    {
        printf("\nNumber = %d", number);
        number++;
    } while (number < 6);
    

    return 0;
}
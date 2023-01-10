#include <stdlib.h>
#include <stdio.h>
#define MONTHS 12 //can define a value outside the function

int main(void)
{
    int days[MONTHS] = {31,28,31,30,31,30,31,31,30,31,30,31};//initialise array with values while defining
    int index;

    for (index = 0; index < MONTHS ; index++)
    {
        printf("Month %d has %2d days.\n",index + 1, days[index]);
    }

    return 0;
}
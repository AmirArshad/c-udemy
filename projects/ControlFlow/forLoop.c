#include <stdio.h>
#include <stdlib.h>

int main()
{
    //runs a loop while i is less than or equal to 5 but also increments 2 every loop
    for(int i = 1, j = 2 ; i <= 5 ; ++i, j = j + 2)
        printf(" %5d\n",i*j);

    return 0;
}
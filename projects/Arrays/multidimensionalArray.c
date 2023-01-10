#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int numbers[2][3][4] = {
        {       //first block of 3 rows
            {10,20,30,40},
            {15,25,35,45},
            {47,48,49,50}
        },
        {       //second block of 3 rows
            {10,20,30,40},
            {15,25,35,45},
            {47,48,49,50}
        }
    };

    int sum = 0;

    for(int i = 0; i < 2; ++i)
    {
        for(int j = 0; j < 3; ++j)
        {
            for(int k = 0; k < 4; ++k)
            {
                sum += numbers[i][j][k];
                printf("Running Sum is %d\n",sum);
            }
        }
    }

    printf("\nTotal Sum is %d\n",sum);

    
    return 0;
}
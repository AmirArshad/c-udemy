#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int grades[10]; //create array
    int count = 10; //create bounds of loop
    long sum = 0; //sum grades
    float average = 0.0f; //store average as float

    printf("\nEnter the 10 grades:\n");

    for(int i = 0 ; i < count ; ++i)
    {
        printf("Grade %2u > ",i + 1);
        scanf("%d",&grades[i]);
        sum += grades[i];
    }

    average = (float)sum/count; //cast result to float

    printf("\nAverage Grade is %.2f\n",average);
    
    return 0;
}
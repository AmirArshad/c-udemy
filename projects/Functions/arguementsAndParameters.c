#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void multiplyTwoNumbers(int x, int y)
{
    int result = x * y;
    printf("The product of %d x %d is: %d\n",x,y,result);
}


int main(void)
{
    multiplyTwoNumbers(10,20);
    multiplyTwoNumbers(20,30);
    multiplyTwoNumbers(37,87);
    return 0;
}


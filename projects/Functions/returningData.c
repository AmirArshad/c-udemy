#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int multiplyTwoNumbers(int x, int y)
{
    int result = x * y;
    return result;
}

int main(void)
{

    int result = 0;
    result = multiplyTwoNumbers(10,20);

    printf("Result of multiplication is %d\n",result);
    return 0;
}



#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

//define global variable
int myglobal1 = 10;
int myglobal2 = 20;

int multiplyTwoNumbers(int x, int y)
{
    int result = x * y;
    return result;
}

int main(void)
{

    int result = 0;
    result = multiplyTwoNumbers(myglobal1,myglobal2); //use global variable

    printf("Result of multiplication is %d\n",result);
    return 0;
}



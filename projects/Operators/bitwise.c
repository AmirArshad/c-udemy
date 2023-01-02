#include <stdio.h>

int main()
{
    unsigned int a = 60; // 0011 1100
    unsigned int b = 13; // 0000 1101

    int result = a & b; // result will be 0000 1100 (12 in integer)
    int result2 = a | b; // result will be 0011 1101 (61 in integer)
    int result3 = a ^ b; // result will be 0011 0001 (49 in integer)
    int result4 = ~a; // result will be 1100 0011 (-61 in integer)
    int result5 = a << 2; // result will be 1111 0000 (240 in integer)
    int result6 = b >> 2; // result will be 0000 0011 (3 in integer)

    printf("result is %d\n",result);
    printf("result is %d\n",result2);
    printf("result is %d\n",result3);
    printf("result is %d\n",result4);
    printf("result is %d\n",result5);
    printf("result is %d\n",result6);

    return 0;
}
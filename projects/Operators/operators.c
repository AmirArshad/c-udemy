#include <stdio.h>

int main()
{
    //while loop test
    int index = 0;
    while (index < 2)
    {
        printf("index is %d\n",index);
        index++;
    }

    //logical operators &&, || and !
    _Bool a = 0;
    _Bool b = 0;
    _Bool result; 
    result = !(a || b);
    printf("%d",result);

    //assignment operators
    int c = 67;
    int d = 89;
    double e = d/c;
    printf("%d\n",d/=c);
    printf("%f\n",e);

    return 0;
}
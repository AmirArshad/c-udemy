#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

//declare functions
int gcd(int x, int y);
float absoluteValue(float x);
float squareRoot(float x);

int main(void)
{
    //test gcd
    int result = 0;
    result = gcd(150,35); //invoke function
    printf("The gcd of 150 and 35 is %d\n",result);

    //test AbsValue
    float result2 = 0;
    result2 = absoluteValue(-9.8);
    printf("The absolute value of -9.8 is %.2f\n",result2);

    //test squareRoot
    float result3 = 0;
    result3 = squareRoot(49);
    printf("The square root of 49 is approx %.2f",result3);

    return 0;
}

//function to find lowest common denominator 
int gcd(int x, int y)
{
    int temp;

    while( y != 0 )
    {
        temp = x % y; //get modulus
        x = y; //x to y for next loop
        y = temp; //set y to modulus - if 0 loop breaks
    }

    return x; //returns lowest common denominator
}

//function to find absolute value
float absoluteValue(float x)
{
    if (x < 0) //check if negative and flip sign
        x = -x;

    return x;
}

//function to find square root
float squareRoot(float x)
{
    const float epsilon = .00001;
    float guess = 1.0;
    float returnValue = 0.0;
    
    if (x < 0)
    {
        printf("Negative argument.\n");
        returnValue = -1.0;
    }

    if (returnValue != -1.0)
        while (absoluteValue(guess * guess - x) >= epsilon) //check is guess is precise to 4dp
         guess = (x / guess + guess) / 2.0; //algorithm to find sqrt

        returnValue = guess;

    return returnValue ;
}
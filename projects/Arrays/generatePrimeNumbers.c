#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int p;
    int i;

    //hardcode first 2 primes

    int primes[50] = {2,3}; //define array and initialise
    int primeIndex = 2;
    _Bool isPrime;

    for(p = 5; p <= 100 ; p += 2) //loop from 5 to 100 in steps of 2
    {
        isPrime = true;

        for (i = 1; isPrime && p / primes[i] >= primes[i]; ++i) //loop until value is prime and value is less sqrt of p
            if(p % primes[i] == 0) //check if divisible by previous prime number in array
                isPrime = false; //set to false while it is divisible
        
        if(isPrime == true)
        {
            primes[primeIndex] = p;
            ++primeIndex;
        }
    }

    for(i = 0; i < primeIndex; ++i)
        printf("%i ",primes[i]);
    
    printf("\n");
    
    return 0;
}
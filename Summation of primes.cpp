/*
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.
*/

#include <stdio.h>
#include <math.h>

bool isprime(int i){
    for (int k = 2; k <= sqrt(i); k++)
    {
        if (i % k == 0) {
            return false;
            break;
        }
        }
    return true;
    }


long add_prime(int j){
    long store = 0;
    for (int i = 2; i < j; i++)
    {
        if (isprime(i) == true)
        {
            store = store + i;
        }

    }
    return store;
}

int main()
{
    long i = 2000000; //limit
    long result = 0;

    result = add_prime(i);
    printf("Sum of all the primes below %d is %d", i, result);
}


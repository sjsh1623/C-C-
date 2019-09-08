/*
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/

#include <stdio.h>

int prime(long long int);

int main()
{
    int long long ans = 600851475143; // number that has to be factor
    prime(ans);
    return 0;
}


int prime(long long int n)
{
    long long int store = 0; 
    long long int next = 1;
    long long int factor = n; // 
    long long int i = 2;

    while(i < n)
    {
        if (factor % i == 0)
        {
            factor = factor / i; // factor that is divided
            store = i; //prime factor that is divided with
            next = next * i;
            printf("%llu\n", i);
            i = 2; // reset loop

            if (next == n)
                break; // break if the prime factor is equal to n
        }
        else
            i++;
    }
    return 0;
}

/*
By using long long int I could use large number as factor

*/
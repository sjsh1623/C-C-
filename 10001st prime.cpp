/*
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?
*/
#include <stdio.h>
int prime(int);
int count(int);

int main()
{
    /*
    *********This code is for check if the number is prime ***********

    int prime_n = 5;
    if (prime(prime_n))
    {
        printf("%d is prime number\n",prime_n);
    }
    else
        printf("%d is not prime number\n", prime_n);

    ******************************************************************
        */
    int number = 10001;
    int prime = 0;
    prime = count(number);
    printf("%d", prime);

}

int prime(int n) // if parameter integer, function prime return true else return false
{
    if (n == 1)
        return false;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false; // return false
            break;
        }
        else
            continue;
        return true; //return true if the n is prime number
    }
}

int count(int n) //th of prime (in this case 10001 is parameter integer)
{
    int cont = 0;
    int number = 1;

    while (cont < n) 
    {
        if (prime(number))
        {
            number++;
            cont++; //integer cont is added when integer number is prime number
            continue;
        }
        else
            number++;
        
    }
    return number - 1;
}

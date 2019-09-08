/*
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?


*/
#include <stdio.h>
int gcd(int a, int b) //Great Common Divisor
{
    while (b != 0) //if it is not making any error loop
    {
        a %= b; // a = a % b;
        a ^= b; // a = a ^ b;
        b ^= a; // b = b ^ a;
        a ^= b; // a = a ^ b;
    }

    return a;
}

int lcm(int a, int b) // Least Common Multiple
{
    
    return a / gcd(a, b) * b;
}

int main()
{
    int stored = 1;
    for (int i = 2; i <= 20; i++)
    {
        stored = lcm(stored, i); // Update integer stored
    }

    printf("%d\n", stored);
    return 0;
}
/*
The sum of the squares of the first ten natural numbers is,

12 + 22 + ... + 102 = 385
The square of the sum of the first ten natural numbers is,

(1 + 2 + ... + 10)2 = 552 = 3025
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/
#include <stdio.h>

int sum_squares(int);
int sum_squares_all(int);
int subtract(int, int);
int main()
{
    int memory_1;
    int memory_2;
    int memory_3;
    int sum_square = 100;
    memory_1 = sum_squares(sum_square);
    printf("Sum of the first natural number %d is %d\n\n", sum_square, memory_1);
    memory_2 = sum_squares_all(sum_square);
    printf("The square of the sum of the first %d natural numbers is %d\n\n", sum_square, memory_2);
    memory_3 = subtract(memory_2, memory_1);
    printf("Diffrence between the sum of the squares of the first %d numbers and the square of the sum is %d\n\n", sum_square, memory_3);
}

int sum_squares(int n)
{
    int order_first = 0;
    int order_second = 0;

    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            order_first = i * i;
            continue;
        }
        order_second = i * i;
        order_first += order_second;
    }
    return order_first;
 }

int sum_squares_all(int n)
{
    int order_first = 0;
    int order_second = 0;
    int square = 0;

    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            order_first = i;
            continue;
        }
        order_second = i;
        order_first += order_second;
    }
    square = order_first * order_first;
    return square;
}

int subtract(int n, int m)
{
    int memory;
    memory = n - m;
    return memory;
}
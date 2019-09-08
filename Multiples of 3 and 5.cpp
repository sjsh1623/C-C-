/*
If we list all the natural numbers below 10 that are multiples of 3 or 5, 
we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.
*/

#include <iostream>

int main()
{
    int three_M = 3;
    int five_M = 5;
    int max = 1000; //maximum number
    int add_three;
    int add_five;
    int three = 0;
    int five = 0;
    int sum;
        for(int i = 0; i < max; i++)
        {
            if(i % 3 == 0)
            {
                add_three = three + i;
                three = add_three;
            }
            else if(i % 5 == 0)
            {
                add_five = five + i;
                five = add_five;
            }
        }
        sum = add_three + add_five;
        printf("Sum of the all the multiples of 3 is %d\n", add_three);
        printf("Sum of the all the multiples of 5 is %d\n", add_five);
        printf("Sum if the all the multiples of 3 and 5 is %d", sum);
}

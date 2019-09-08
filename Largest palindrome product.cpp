/*
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/
#include <stdio.h>

int reverse_integer(int);

int main()
{
    int store = 0; //integer that stores a data
    int compare = 0; //integer that find biggest number
    int max = 999; //maximum of 3 digit
    int min = 100; //minimum of 3 digit
    int reverse = 0; // reversed integer
    int stored_i = 0;
    int stored_j = 0;
    int loop_j = 0;


    for (int i = max; i > min; i--) //loop for the first 3 diget
    {
        for (int j = max; j > min; j--) //loop for the last 3 diget
        {
            store = i * j;
            reverse = reverse_integer(store);

            if (reverse == store) // check if reverd integer and given integer is same
            {
                printf("The palindrome is %d\n product of %d and %d\n", store,i,j);
                loop_j = j;
                break; //break for second loop only
                
            }
            
            
        }
        if (compare < store)
        {
            compare = store;
            stored_i = i;
            stored_j = loop_j;
        }
        }
    printf("The largets palindrome is %d\n product of %d and %d\n", compare, stored_i, stored_j);
    }
   


int reverse_integer(int n)
{
    int integer = n; //The integer that is given
    int reversed = 0; //The reversed integer of value "integer"
    
    while (integer > 0)
    {
        reversed = reversed * 10 + integer % 10;
        integer = integer / 10;
    }
    if (reversed == n)
    {
        return reversed;
    }
    else
        return 0;
}
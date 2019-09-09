/* A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

a^2 + b^2 = c^2
For example, 3^2 + 4^2 = 9 + 16 = 25 = 52.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.

*/

#include <stdio.h>
 
//function that sqaure root
int sqroot(int i) {
    return i * i;
}

int triplet(int j) {
    
    for (int a = 1; a < j; a++) {
        for (int b = 1; b < j; b++) {
            for (int c = 1; c < j; c++)
            {
                if (sqroot(a) + sqroot(b) == sqroot(c) && a + b + c == j)
                {
                    printf("Triplet for which a + b + c= %d is a= %d, b= %d, c= %d\n",j, a, b, c);
                }
            }
        }
    }
    return 0;
}

int main()
{
    triplet(1000);
    printf("success");
    return 0;
}



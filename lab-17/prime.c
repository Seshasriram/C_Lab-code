/*
All Prime Number
Write a program in C to find the prime Numbers Between the given range 100 to 999
*/

#include <stdio.h>
int main()
{
    int i, j, is_prime;
    puts(" prime Numbers Between the given range 100 to 999");

    for (i = 100; i <= 999; i++)
        
    {
        is_prime = 1;
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                is_prime = 0;
                break;
            }
        }
        if (is_prime == 1)
        {
            printf("%d\n", i);
        }
    }
    printf(" \n ");
    return 0;
}
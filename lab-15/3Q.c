/*
Write a C program to display the sum of n terms of even natural numbers.
Test Data :

Input number of terms : 5

Expected Output :

The even numbers are :2 4 6 8 10

The Sum of even Natural Number upto 5 terms : 30
*/

#include <stdio.h>
int main()
{
    int n, sum = 0;

    printf("Enter the number:");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int even = 2 * i;
        printf(" %d ", even); 
        sum += even;
    }
    printf(" \n Natural Number of %d is %d\n", n, sum);
    return 0;
}
/*Write a C program that asks the user to input a three-digit integer and calculates the sum of its digits. Using While loop.

Input as :

Enter a three digit number : 123

Output as :

Sum of the digits : 6
*/

#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter the three digit number:");
    scanf("%d", &n);

    while (n != 0)
    {
        sum = sum + n % 10;
        n /= 10;
    }
    printf("The sum of three digit: %d", sum);
    return 0;
}
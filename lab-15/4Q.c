/*Write a program in C to find the sum of the series 1 +11 + 111 + 1111 + .. n terms.



Test Data :

Input the number of terms : 5

Expected Output :

1 + 11 + 111 + 1111 + 11111

The Sum is : 12345
*/

#include <stdio.h>
int main()
{
    int n, i;
    long sum = 0, term = 0;
    printf("Input the number of terms: ");
    scanf("%d", &n);
    printf("The series is :");
    for (i = 1; i <= n; i++)
    {
        term = term * 10 + 1;
        printf("%ld", term);
        if (i < n)
        {
            printf(" + ");
        }
        sum = sum + term;
    }
    printf("\n The Sum is : %ld\n", sum);
    return 0;
}

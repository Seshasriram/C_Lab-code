/*
Write a c program for the following pattern

    1

    1 * 2

    1 * 2 * 3

    1 * 2 * 3 * 4
*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of row :");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
            if (j < i)
            {
                printf(" * ");
            }
        }
        printf("\n");
    }
    return 0;
}
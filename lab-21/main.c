#include <stdio.h>
int main()
{
    /*
    Write a c program for the following pattern
    1 2 3 4 5
    0 3 4 5 6
    0 0 5 6 7
    0 0 0 7 8
    0 0 0 0 9
    */

    int n, r, c;
    printf("Enter no rows:");
    scanf("%d", &n);
    for (r = 1; r <= n; r++)
    {
        for (c = 1; c <= n; c++)
        {
            if (c<=n-r)
                printf(" 0 ");
            else
                printf("%3d", c);
        }
        printf("\n");
    }
}
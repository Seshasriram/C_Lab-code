#include <stdio.h>
void main()
{
    int n, a, b, c;
    a = 0;
    b = 1;
    printf("Enter the number:");
    scanf("%d", &n);

    while (a <= n)
    {
        printf(" %d ", a);
        c = a + b;
        a = b;
        b = c;
    }
}
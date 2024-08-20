#include <stdio.h>
int main()
{
    int a[100], n, i, j, t;
    printf("Enter arry size :");
    scanf("%d", &n);
    printf("Enter %d Elemnts:", n);
    for (i = 0; i <= n; i++) // loop 1
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i <= n - 2; i++) // outer loop 2
    {
        for (j = i + 1; j <= n - 1; j++) // inner loop 3
        {
            if (a[i] < a[j])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    printf("sorted Elemnts");
    for (i = 0; i < n; i++) // loop 4
    {
        printf(" %d", a[i]);
    }
    return 0;
}
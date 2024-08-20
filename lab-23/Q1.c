#include <stdio.h>
int main()
{

    int a[100], n, i, j, t;
    printf("Enter the array size:");
    scanf("%d", &n);
    printf("Enter %d element", n);
    for (i = 0; i < n; i++)// loop 1
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i <= n - 2; ++i)//loop2 Outer loop
    {
        for (j = i + 1; j <= n - 1; ++j)// inner loop 3
        {
            if (a[i] > a[j])// main code 
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    printf("Sorted elements");
    for (i = 0; i < n; i++)// loop 4 
    {
        printf("%4d", a[i]);
    }
    return 0;
}

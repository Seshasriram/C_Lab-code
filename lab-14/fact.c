#include <stdio.h>
int main()
{
    int n, i=1, fact = 1;
    printf("Enter the number :");
    scanf("%d",&n);

/*
    while(i<=n)
    {
        fact=fact*i;
        i++;
    }
*/
    do{
        fact=fact*i;
        i++;
    }while(i<=n);

    printf("Factorial of %d = %d\n",n,fact);

    return 0;
}
#include <stdio.h>
int main()
{
    int n, i=0;
    printf("Enter the number :");
    scanf("%d", &n);

    // for (i = 0; i <= 10; i++)
    // {
    //     printf("%d X %d = %d\n", n, i, n * i);
    // }



    while (i<=10)
    {
        i++;
        printf("%d X %d = %d\n",n,i,n*i);
    }
    
    return 0;
}
/*
Write a program in C to display the multiplication table for a given integer.



Test Data :

Input the number (Table to be calculated) : 15

Expected Output :

15 X 1 = 15

...

...

15 X 10 = 150

*/
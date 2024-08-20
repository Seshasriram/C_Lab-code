/*Write a C program to find the maximum between two numbers using Switch statement.*/
#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b;
    printf("Enter the a and b value :");
    int c = scanf("%d%d", &a, &b);
    switch (a > b)
    {
    case 1:
        printf("a is bigger");
        break;

    case 0:
        switch (a < b)
        {
        case 1:
            printf("bis bigger");
            break;

        case 0:
            printf("both are equal\n");
            break;       
        }
    }
    return 0;
}
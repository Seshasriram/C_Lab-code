#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number :");
    scanf("%d",&n);

    switch(n%2){
        case 0:
        printf("It is Even number\n");break;
        case 1:
        printf("It is Odd number \n");break;
        default:
        printf("It is the invalid number ");
    }
}
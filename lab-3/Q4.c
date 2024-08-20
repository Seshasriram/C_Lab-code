#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("Enter  the number :");
    scanf("%d",&n);
    n%10>= 5 && printf("%d",((n/10)+1)*10) || printf("%d",n/10*10);
    getch();
}
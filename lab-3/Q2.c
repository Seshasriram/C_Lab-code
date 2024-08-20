#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("Enter  the number :");
    scanf("%d",&n);
    n%100>= 50 && printf("%d",((n/100)+1)*100) || printf("%d",n/100*100);
    getch();
}
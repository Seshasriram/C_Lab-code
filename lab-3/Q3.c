#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("Enter  the number :");
    scanf("%d",&n);
    printf("%d" , n%10+n/10);
    getch();
}

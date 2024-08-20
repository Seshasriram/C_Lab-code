#include<stdio.h>
#include<conio.h>
void main()
{
    int a = 786;
    printf(" %d " ,a%10);
    a=a/10;
    printf("%d %d ",a%10,a/10);
}
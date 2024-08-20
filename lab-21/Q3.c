#include<stdio.h>
int main()
{
    // int n,current_num,row_length;

    int a=1,n=4;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%3d",a++);
        }
        printf("\n");
    }

    for(int i=n;i>=n/2;i--)
    {
        for(int j=1;j<=i-1;j++)
        {
            printf("%3d",a++);
        }
        printf("\n");
    }
}


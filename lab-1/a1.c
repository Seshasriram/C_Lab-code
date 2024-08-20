#include <stdio.h>
#include <conio.h>

int main()
{
    int a = 10;
    int b = 20;
    int c = a;
    a = b;
    b = c;
    printf("a=%d, b=%d, c=%d",a,b,c);    
    return 0;
}
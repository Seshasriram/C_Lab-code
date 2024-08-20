/*

Write a C program that asks the user to input an integer and count the digts and print the count of the digits.

Input as :

Enter a number : 546
n=546;c=0;
while(n!=0)
{
c++;
n/=10;
}

Output as :

Count of the digits is : 3
*/

#include<stdio.h>
int main(){
    int n,c=0;
    n=5464;
    while(n!=0){
        c++;
        n=n/10;        
    }
    printf("Count of the digits is :%d\n",c);    
    return 0;
}

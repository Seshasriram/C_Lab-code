/*
Write a C program to add all the natural number from 1 to n. Ask the user to give n value and print the addition value.
Input as : 

Enter n value : 10

Output as :

Sum of the natural number from 1 to 10 : 55
 */
#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter the number:");
    scanf("%d",&n);

    while (n!=0)
    {
        sum=sum+n--;
    }
    printf("sum of natural number : %d",sum);
    return 0;
}
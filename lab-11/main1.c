#include<stdio.h>
#include<conio.h>
int main()
{
    /*Write a C program to check whether a Alphabet is vowel or consonant using Switch Case.*/
    char ch;
    printf("Enter the Alphabet:");
    scanf("%c",&ch);

    switch(ch){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        printf("it vowel");break;
        default:printf("it's not vowel");
    }
    return 0;
}

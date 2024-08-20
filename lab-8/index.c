#include <stdio.h>
#include <conio.h>
int main()
{
    char sam;
    printf("Enter the character:");
    scanf("%c", &sam);

    ((sam >= 'A' && sam <= 'z') || (sam >= 'a' && sam <= 'z')) ? printf("%c is an Alphabet\n", sam) : printf("%c is Not an Alphabet\n", sam);

    return 0;
}
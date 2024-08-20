#include <stdio.h>

int main()
{
    int number, i = 1;

    // Prompt user to enter a number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Print the multiplication table using a while loop
    printf("Multiplication table for %d:\n", number);
    while (i <= 10)
    {
        printf("%d x %d = %d\n", number, i, number * i);
        i++;
    }

    return 0;
}

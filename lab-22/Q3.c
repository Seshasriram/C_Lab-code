/*

Write a program in C to find the sum of all elements of the array.

Input the number of elements to be stored in the array :3

Input 3 elements in the array :

element - 0 : 2

element - 1 : 5

element - 2 : 8

Expected Output :

Sum of all elements stored in the array is : 15

*/

#include <stdio.h>

int main()
{
    int n, i, sum = 0;

    // Input the number of elements to be stored in the array
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);

    int arr[n]; // Declare the array of size n

    // Input n elements in the array
    printf("Input %d elements in the array:\n", n);
    for (i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    // Calculate the sum of all elements in the array
    for (i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    // Display the sum
    printf("Sum of all elements stored in the array is: %d\n", sum);

    return 0;
}

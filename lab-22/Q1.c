#include <stdio.h>

int main()
{
    int arr[10];
    int i;

    // Input 10 elements in the array
    printf("Input 10 elements in the array:\n");
    for (i = 0; i < 10; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    // Print the elements of the array
    printf("Elements in array are: ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

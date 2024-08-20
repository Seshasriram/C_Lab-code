#include <stdio.h>

int main()
{
    int n, i;

    // Input the number of elements to store in the array
    printf("Input the number of elements to store in the array: ");
    scanf("%d", &n);

    int arr[n]; // Declare the array of size n

    // Input n number of elements in the array
    printf("Input %d number of elements in the array:\n", n);
    for (i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    // Display the values stored in the array
    printf("The values stored into the array are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Display the values stored in the array in reverse order
    printf("The values stored into the array in reverse are:\n");
    for (i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

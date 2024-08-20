#include <stdio.h>

int main()
{
    int n, i, max;

    // Input array size
    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Assume the first element is the maximum
    max = arr[0];

    // Iterate through the array to find the maximum element
    for (i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    // Output the maximum element
    printf("Max element is: %d\n", max);

    return 0;
}

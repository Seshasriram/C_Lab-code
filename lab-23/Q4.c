#include <stdio.h>

int main()
{
    int n, i, min;

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

    // Assume the first element is the minimum
    min = arr[0];

    // Iterate through the array to find the minimum element
    for (i = 1; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    // Output the minimum element
    printf("Min element is: %d\n", min);

    return 0;
}

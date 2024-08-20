#include <stdio.h>

int main()
{
    int n, i;

    // Input the number of elements
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input the elements in the array
    printf("Input %d elements in the array:\n", n);
    for (i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    // Print the even elements
    printf("\nThe Even elements are:\n");
    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            printf("%d ", arr[i]);
        }
    }

    // Print the odd elements
    printf("\n\nThe Odd elements are:\n");
    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}

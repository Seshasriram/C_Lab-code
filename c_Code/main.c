#include <stdio.h>
int main()
{
    int nr, nc, r, c;

    printf("Enter the number of rows :");
    scanf("%d", &nr);

    printf("Enter the number of colunms :");
    scanf("%d", &nc);

    for (r = 1; r <= nr; r++)// outer loop
    {
        for (c = 1; c <= nc; c++)// inner loop
        {
            printf(" * ");
        }
        printf("\n");
    }
    return 0;
}
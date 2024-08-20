#include <stdio.h>
int main()
{
    int er, ec, r, c;
    printf("Enter the row :");

    scanf("%d", &er);

    printf("Enter the columns:");

    scanf("%d", &ec);

    for (r = 1; r <= er; r++)
    {
        for (c = 1; c <= ec; c++)
        {
            printf(" $ ");
        }
        printf("\n");
    }
    return 0;
}
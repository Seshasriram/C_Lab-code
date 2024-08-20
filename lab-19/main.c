#include <stdio.h>
int main()
{
    int nr, nc, r, c;
    printf("Enter the value of row and colum : ");
    scanf("%d%d", &nr, &nc);
    for (r = 0; r < nr; r++)
    {
        for (c = 0; c< nc; c++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
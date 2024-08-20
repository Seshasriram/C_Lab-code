#include <stdio.h>
int main()
{
    int x = 1;
    if (printf("Hello") != 5)
        printf("inside if\n");
    else if (printf("student..!"))
        printf("Wellocome to c\n");
    else
        printf("Error");
}
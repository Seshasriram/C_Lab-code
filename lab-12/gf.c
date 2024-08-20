#include <stdio.h>
int main()
/*
Write a C program to accept id from user and display department.
Id: 11 to 15 is Software department
16 to 20 is Developer department
21 to 23 is Management department
*/
{
    int id;
    printf("Enter the id :");
    scanf("%d", &id);
    switch (id)
    {
    case 11 ... 15: // range
        printf("software Department");
        break;
    case 16 ... 20:
        printf("Developer Department");
        break;
    case 21 ... 23:
        printf("Management Department");
        break;
    default:
        printf("Invalid id");
    }
    return 0;
}
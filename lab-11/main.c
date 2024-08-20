#include <stdio.h>
#include <conio.h>
void main()
{
    /*Write a C to take the value from the user as input the month number and print number of days in that month. Using switch statement.*/
    int month;
    printf("Enter the month:");
    scanf("%d", &month);
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("31 days");
        break;
    case 2:
        printf("28/29 day");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("30 days");
        break;
    default:
        printf("invalid month");
    }
    getch();
}
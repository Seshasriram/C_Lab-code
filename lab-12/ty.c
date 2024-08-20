#include <stdio.h>
int main()
/*
Write a C program that will ask for a person’s name and his/her game score. Then it will ask for a second person’s name and score. The program will print the winner’s name and also print by how many. points that person won by comparing the scores. Develop this program by using switch case.

*/
{
    char name, name1;
    int score, score1;
    printf("Enter name  his score:");
    printf("Enter his score:");
    scanf("%s%d", &name, &score);
    scanf("%s%d", &name1, &score1);

    switch (score > score1)
    {
    case 1:
        printf("name=%s is a winner") break;
    case 0:
        switch (score < score1)
        {

        case 1:
            printf("name1=%s is a winner") break;
        }
    default:
        printf("both are equal");
    }

    return 0;
}
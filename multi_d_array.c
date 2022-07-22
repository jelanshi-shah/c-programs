#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int i, j, total[3] = {0, 0, 0};
    int marks[3][5];

    printf("Enter details : ");
    printf("\n---------------\n");

    for (i = 0; i < 3; i++)
    {
        printf("Student %d : \n", i + 1);
        for (j = 0; j < 5; j++)
        {
            printf("Subject %d : ", j + 1);
            scanf("%d", &marks[i][j]);
        }
    }

    printf("\n---------------\n");
    printf("Student table \n");
    printf("\t\tSub1\tSub2\tSub3\tSub4\tSub5");
    printf("\tTotal");
    printf("\n");

    for (i = 0; i < 3; i++)
    {
        printf("student %d:\t", i + 1);
        for (j = 0; j < 5; j++)
        {
            printf("%d\t", marks[i][j]);
            total[i] = marks[i][j] + total[i];
        }
        printf("%d", total[i]);
        printf("\n");
    }
    getch();
    return 0;
}   
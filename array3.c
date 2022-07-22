// 1 . WAP to take 5 values from the user into marks array which type is float and print whole array as
// marks 1 : 1st value

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()

{
    int marks[5], i;

    for (i = 0; i <= 4; i++)
    {
        printf("value %d : ", i + 1);
        scanf("%d", &marks[i]);
    }

    for (i = 0; i <= 4; i++)
    {

        printf("value %d : %d \n", i + 1, marks[i]);
    }

    return 0;
}
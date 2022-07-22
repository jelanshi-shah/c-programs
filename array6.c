// 1. Write a program to find greatest among 10 numbers

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int i, max, number[5];

    printf("Enter 5 numbers = \n");

    for (i = 0; i <= 4; i++)
    {
        scanf("%d", &number[i]);
    }
    max = number[0];
    for (i = 1; i <= 4; i++)
    {
        if (max < number[i])
        {

            max = number[i];
        }
    }
    printf("max = %d", max);
    return 0;
}
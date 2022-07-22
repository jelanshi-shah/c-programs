#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int a[5], i, sum = 0;
    float avg;
    printf("Enter Number :");

    for (i = 0; i <= 4; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i <= 4; i++)
    {
        sum = sum + a[i];
    }
    avg = sum / 5;

    printf("Avrage is = %f", avg);
    return 0;
}
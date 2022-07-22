#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int mark[10],  sum = 0, i;
    float avg;

    for (i = 0; i <= 9; i++)
    {
        printf("Value %d = ", i + 1);
        scanf("%d", &mark[i]);
    }
    for (i = 0; i <= 9; i++)
    {
        sum = sum + mark[i];
    }
    printf("sum of 10 numbers is  = %d\n", sum);

    avg = sum / 10.0;

    printf("Avrage of 10 numbers is = %f ", avg);

    return 0;
}
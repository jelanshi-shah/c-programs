#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int a[5], i, sum = 0, even = 0, odd = 0;
    printf("Enter 5 Numbers : \n");

    for (i = 0; i <= 4; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    printf("sum of 5 numbers is = %d", sum);
    for (i = 0; i <= 4; i++)
    {
        if (a[i] % 2 == 0)
        {
            even = even + a[i];
        }
        else
        {
            odd = odd + a[i];
        }
    }
    printf("\nSum of even number is = %d\n", even);
    printf("Sum of odd number is = %d\n", odd);
    return 0;
}
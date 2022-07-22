#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int a[10], even, odd, i;

    printf("Enter 10 Numbers = \n");

    for (i = 0; i <= 9; i++)
    {
        scanf("%d", &a[i]);

        if (a[i] % 2 == 0)
            (
                even = even + a[i];
                printf("sum of even number is %d", even);

                else odd = odd + a[i];
                printf("sum of odd number is %d", odd);)
    }

    return 0;
}
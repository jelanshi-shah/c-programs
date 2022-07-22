#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int a[10], i, even, odd;

    printf("Enter 10 numbers = \n");

    for (i = 0; i <= 9; i++)
    {
        scanf("%d", &a[10]);

        for (i = 0; i <= 9; i++)
        {
            if (a[i] % 2 == 0)
            {
                even = even + a[i];

                printf("Sum of Even number is %d", even);

                else 

                    printf("Sum of Odd number is %d", odd);

                odd = odd + a[i];
            }
        }
    }
    return 0;
}
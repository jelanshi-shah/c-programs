#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int arr[50], i;
    int left, right, temp;
    int n;

    printf("Enter number of value : ");
    scanf("%d", &n);

    printf("Enter %d values : ", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\n Before reversing ... \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    left = 0;
    right = n - 1;

    while (left < right)
    {
        temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;

        left++;
        right--;
    }

    printf("\n After reversing ... \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
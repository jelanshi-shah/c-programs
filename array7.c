#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int i, min, number[5];
    printf("Enter Numbers :\n");

    for(i = 0; i <= 4 ; i++){
        scanf("%d",&number[i]);
    }
    min = number[0];
    for ( i = 1; i < 5; i++)
    {
        if (min > number[i])
        {
            min = number[i];
        }
        
    }
    printf("min = %d",min);
    
    return 0;
}
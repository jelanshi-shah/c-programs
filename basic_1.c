#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int marks[5] = {75, 84, 63, 89, 73};

    printf("Marks of subject 1 : %d \n", marks[0]);
    printf("Marks of subject 2 : %d \n", marks[1]);
    printf("Marks of subject 3 : %d \n", marks[2]);
    printf("Marks of subject 4 : %d \n", marks[3]);
    printf("Marks of subject 5 : %d \n", marks[4]);

    marks[2] = 78;
    printf("Marks of subject 3 : %d \n", marks[2]);

    getch();
    return 0;
}
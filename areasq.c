#include<stdio.h>
#include<conio.h>
int main()
{
    float side,area;
    printf("Enter any value for side:");
    scanf("%f",&side);
    area=side*side;
    printf("\nArea of a square=%f",area);
    getch();
    return 0;
}
#include<stdio.h>
#include<conio.h>
int main()
{
    int year;
    printf("Enter any year:");
    scanf("%d",&year);
    if(year%4==0)
    {
        printf("\nThis is leap year");
    }
    else
    {
        printf("\nThis is not leap year");
    }
    getch();
    return 0;
}
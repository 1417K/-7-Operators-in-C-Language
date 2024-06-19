#include<stdio.h>
#include<conio.h>
int main()
{
    int no;
    printf("Enter any number:");
    scanf("%d",&no);
    if(no<0)
    {
        if(no==0)
        {
            printf("\nThe number zero is neither  positive nor negative");
        }
        else
        {
         printf("\nThe number is negavtive");
        }
    }
    else
    {
     printf("\nThe number is positive");
    }
    getch();
    return 0;
}

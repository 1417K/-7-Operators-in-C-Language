#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("Enter First Number:");
    scanf("%d",&a);
    printf("Enter Second Number:");
    scanf("%d",&b);
    printf("Enter Third Number:");
    scanf("%d",&c);
    if(a>b)
    {
        if(a>c)
       {
        printf("\nValue of %d",c" is greater");
       }
       else
       {
         printf("\nValue of a is greater");
       }
    }
    else
    {
        if(b>c)
        {
            printf("\nValue of b is greater");
        }
        else
        {
         printf("\nValue of c greater");   
        }
    }
    getch();
    return 0;
}
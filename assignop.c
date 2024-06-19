#include<stdio.h>
#include<conio.h>
int main()
{
    int y,z;
    printf("Enter value :");
    scanf("%d",&y);
    printf("Enter second value :");
    scanf("%d",&z);
    if(y==z)
    {
     printf("y and z both are equal");
    }
    else
    {
     printf("y and z both are unequal"); 
    }
    getch();
 return 0;
}
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("Enter any two numbers:");
    scanf("%d%d",&a,&b);
    c=a>b?a+10:b+10;
    printf("\nResult=%d",c);
    return 0;
    getch();
}
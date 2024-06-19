
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("Enter any three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
    {
         printf("\nvalue of %d",a"is greter than b & c");
    }
    if(b>a&&b>c)
    {
        print("\nvalue of %d",b"is greter than a & b");
    }
    if(c>a&&c>b)
    {
        print("\nvalue of %d",c"is greter than a & b");
    }
    getch();
    return 0;
}
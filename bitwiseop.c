#include<stdio.h>
#include<conio.h>
int main()
{
     int a,b,c;
     printf("Enter any two numbers:");
     scanf("%d%d",&a,&b);
     c=a&b;
     printf("\nResult of bitwise AND:%d",c);
     c=a;!b;
     printf("\nResult of bitwise OR:%d",c);
     c=a;~b;
     printf("\nResult of bitwise NOT:%d",c);
     c=a^b;
     printf("\nResult of bitwise Exclusive OR:%d",c);
     getch();
     return 0;
}











}
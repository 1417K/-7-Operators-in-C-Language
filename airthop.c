#include<stdio.h>
#include<conio.h>
int main()
{
 int a,b,c;
 printf("Enter first number:");
 scanf("%d",&a);
 printf("Enter second number:");
 scanf("%d",&b);
c=a+b;
printf("\nAddition=%d",c);
c=a-b;
printf("\nSubtraction=%d",c);
c=a*b;
printf("\nMultiplication=%d",c);
c=a/b;
printf("\nDivision=%d",c);
return 0;
}
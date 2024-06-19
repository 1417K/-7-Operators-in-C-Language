#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
  printf("Enter any two numbers:");
  scanf("%d%d",&a,&b);
  a=a++;
  b=b--;
  printf("value of a after increment :%d",a);
  printf("value of b after decrement :%d",b);
  getch();
  return 0 ;  
}
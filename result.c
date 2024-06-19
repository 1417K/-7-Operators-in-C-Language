/*Display result (Distinction,first class,pass,fail)as per your marks
      marks>=75----Distinction
      marks>=60----first class
      marks>=40----pass only
      marks<40----fail*/

#include<stdio.h>
int main()
{
 char name[10];   
 float roll_no,c_lang,cpp_lang,html_lang,css_lang, marks,avg;
 int i;
 printf("Enter your Name:");
 
 printf("\nEmter your Roll Number:");
 scanf("%f",&roll_no);
 printf("\nEnter your C language marks:");
 scanf("%f",&c_lang);
 printf("\nEnter your CPP language marks:");
 scanf("%f",&cpp_lang);
 printf("\nEnter your HTML language marks:");
 scanf("%f",&html_lang);
 printf("\nEnetr your CSS language marks:");
 scanf("%f",&css_lang);
avg=(c_lang+cpp_lang+html_lang+css_lang)/4;
printf("\nYour Average marks are:%f",avg);
return 0;
}
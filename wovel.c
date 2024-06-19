#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any alphabet:");
    scanf("%c",&ch);
    switch(ch)
    {
        case'a':
        case'e':
        case'i':
        case'o':
        case'u':
        case'A':
        case'E':
        case'I':
        case'O':
        case'U':printf("\nThis alphabet is vowel");
        break;
        default:printf("\nThis alphabet is consonent");
        break;
        return 0;
    }

}
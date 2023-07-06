#include<stdio.h>
void Display(char ch)
{


    if(ch >= 65 && ch <= 90 )
    {
        ch = ch + 32;
        printf("%c",ch);
    }
    else
    {
        printf("Do not enter lower case or any symbol");
    }
}
int main()
{
    char cValue = '\0';


    printf("Please enter one character\n");
    scanf("%c",&cValue);

    Display(cValue);
    return 0;
}
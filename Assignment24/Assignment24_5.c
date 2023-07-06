#include<stdio.h>
void Display(char ch)
{
    if(ch >= 'A' && ch <='Z')
    {
        printf("%c \t %d \t %x \t %o",ch,ch,ch,ch);
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
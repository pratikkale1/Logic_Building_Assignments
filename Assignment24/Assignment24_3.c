#include<stdio.h>

void Display(char ch)
{
    char i = '\0';


    for( i = 65 ; i <= 90;  i++)
    {
        if(i==ch)
        {
            printf("%c\t",ch++);
        }
    }

    for(i =  122 ; i>=97 ; i--)
    {
        if(i==ch)
        {
            printf("%c\t",ch--);
        }
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
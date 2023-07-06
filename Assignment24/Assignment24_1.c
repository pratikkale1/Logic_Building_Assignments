#include<stdio.h>
void DisplayASCII()
{
    int i = 0;
    printf("Character\t Decimal\t Hex\t Octal");
    for(i-0;i <= 127 ; i++)
    {
        printf("%c \t %d \t %x \t %o\n",i,i,i,i);
    }
}
int main()
{
    DisplayASCII();
    return 0;
}
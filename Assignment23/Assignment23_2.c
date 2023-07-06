
#include<stdio.h>
#include<stdbool.h>

bool ChkCapital(char ch)
{
    if(( ch>='A' && ch<='Z'))
    {
        return true;
    }
    else
    {
        return  false;
    }
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Please enter one character\n");
    scanf("%c",&cValue);

    bRet = ChkCapital(cValue);
    if(bRet == true)
    {
        printf("%c is a Capital \n",cValue);
    }
    else
    {
        printf("%c is not capital\n",cValue);
    }


    return 0;
}

#include<stdio.h>
#include<stdbool.h>

bool ChkAlpha(char ch)
{
    if((ch>='a' && ch <='z' && ch>='A' && ch<='Z'))
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

    bRet = ChkAlpha(cValue);
    if(bRet == true)
    {
        printf("%c is a Character \n",cValue);
    }
    else
    {
        printf("%c is not a Character\n",cValue);
    }


    return 0;
}
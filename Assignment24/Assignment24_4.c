#include<stdio.h>
#include<stdbool.h>

bool IsCapitalX(char ch)
{
    if((ch>='!' && ch <='@' ))
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

    bRet = IsCapitalX(cValue);
    if(bRet == true)
    {
        printf("%c is Special character \n",cValue);
    }
    else
    {
        printf("%c is not Special charcter \n",cValue);
    }


    return 0;
}
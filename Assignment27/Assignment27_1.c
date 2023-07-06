#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *str, char ch)
{

    while(*str != '\0')
    {
        if ((*str == ch))
        {
            break;
        }
        str++;
    }
    if(*str == '\0')
    {
        return FALSE;
    }
    else
    {
        return TRUE;
    }
    

}


int main()

{

    char Arr[20];
    char cValue = '\0';
    BOOL bRet = 0;

    printf("Please enter string\n");
    scanf("%[^'\n']s",Arr);

    printf("Please enter the Character\n");
    scanf(" %c",&cValue);

    bRet = ChkChar(Arr,cValue);

    if(bRet == TRUE)
    {
        printf("%c Character found",cValue);
    }
    else
    {
        printf("%c Character not found",cValue);
    }

    return 0;



    return 0;
}

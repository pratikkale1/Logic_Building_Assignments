#include<stdio.h>
int CountSmall(char *str)
{

    int iCnt = 0;

    while(*str!='\0')
    {
        if(*str = " ")
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}
int main()

{

    char Arr[10];
    int iRet = 0;

    printf("Please enter string\n");
    scanf("%[^'\n']s",Arr);

    iRet = CountSmall(Arr);

    printf("Frequency of small letters are : %d\n",iRet);

    return 0;
}
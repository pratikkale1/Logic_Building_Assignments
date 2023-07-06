// Write a program which accept string frm user and return difference bet small and capital 
// Input : "Pratik"
// Output : 5

#include<stdio.h>

int CountCapital(char *str)
{
    int iSCnt = 0;
    int iCCnt = 0;

    while(*str!= '\0')
    {
        if (*str >='a' && (*str <='z'))
        {
            iSCnt++;
        }
        else
        {
            iCCnt++;
        }
        str++;
        
    }  
    return iSCnt - iCCnt ;  
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string\n");
    scanf("%[^'\n']s",arr);

    iRet = CountCapital(arr);

    printf("%d",iRet);

    return 0;
}

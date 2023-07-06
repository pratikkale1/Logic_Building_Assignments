// Write a program which accept string frm user and count number of Capital characters
// Input : "Marvellous Multi OS"
// Output : 4

#include<stdio.h>

int CountCapital(char *str)
{
    int iCnt = 0;
    while(*str!= '\0')
    {
        if (*str >='A' && (*str <='Z'))
        {
            iCnt++;
        }
        str++;
        
    }  
    return iCnt;  
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

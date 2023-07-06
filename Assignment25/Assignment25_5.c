#include<stdio.h>


void Reverse(char *str)
{
    int length = 0;
    while(str[length] != '\0')
    {
        length++;
    }

    int iCnt = 0;
    for(iCnt = length-1 ; iCnt >=0;iCnt--)
    {
        printf("%c",str[iCnt]);
    }    

}

int main()

{
    char arr[20];


    printf("Enter string\n");
    scanf("%[^'\n']s",arr);

    Reverse(arr);

    return 0;
}
#include<stdio.h>


char strlwrx(char *str)
{


    while (*str!='\0')
    {
        if(*str >='A' && *str <='Z' )
        {
            *str = *str + 32;
            
        }
        str++;

    }
    return *str;

}
int main()

{
    char arr[20];
    char cRet='\0';


    printf("Enter string\n");
    scanf("%[^'\n']s",arr);

    strlwrx(arr);

    printf("Modified string is : %s",arr);
    return 0;
}
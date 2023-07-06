#include<stdio.h>
#include<stdbool.h>

bool ChkVowel(char *str)
{
    bool flag = false;

    while (*str!='\0')
    {
        if(*str =='A' && *str =='Z' )
        {
            *str = *str + 32;
        }

        if(*str=='a' || *str =='i' || *str =='e' || *str =='o' || *str =='u')
        {
            flag == true;
            break;
        }
        str;
    }
    return flag;

}
int main()

{
    char arr[20];
    bool bRet = 0;

    printf("Enter string\n");
    scanf("%[^'\n']s",arr);

    bRet = ChkVowel(arr);


    if(bRet == true)
    {
        printf("Contain Vowel \n");
    }
    else
    {
        printf("Not Contain Vowel \n");
    }


    return 0;
}
// Accept on character from user and check whether that character is vowel (a,e,i,o,u) or not

#include<stdio.h>

typedef int BOOL  ;
#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char ch)
{
    if (ch ==  'A' || ch == 'a'|| ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o'||ch == 'O' || ch == 'u' || ch == 'U')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}


int main()

{

    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character\n");
    scanf("%c",&cValue);

    bRet = ChkVowel(cValue);

    if (bRet == TRUE)
    {
        printf("Its Vowel\n");
    }
    else
    {
        printf("Its not Vowel");
    }

    return 0;
}
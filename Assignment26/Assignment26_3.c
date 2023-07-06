#include<stdio.h>

void StrlwrX(char *str)
{
    while(*str != '\0')
    {
        if(*str>='a' && *str<='z')
        {
            *str = *str-32;
        }
        str++;

        if(*str>='A' && *str<='Z')
        {
            *str = *str+32;
        }
        str++;
    }


}

int main()
{
    char Arr[100];


    printf("Enter String\n");
    scanf("%[^'\n']s",Arr);

    printf("Arr Before Function Call\n");

    int no1 = 0;
    while(Arr[no1] != '\0')
    {
        printf("%c",Arr[no1]);
        no1++;
    }
    printf("\n");

    StrlwrX(Arr);    //Function Call

    printf("Arr After Function Call\n");
    int no = 0;
    while(Arr[no] != '\0')
    {
        printf("%c",Arr[no]);
        no++;
    }
    
    return 0;
}
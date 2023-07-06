#include<stdio.h>
void StrlwrX(char *str)
{
    while(*str != '\0')
    {
        if(*str>=48 && *str<=57)
        {
            printf("%c",*str);
            //*str++;
        }
        str++;
        
    }    
}

int main()
{
    char Arr[20];

    printf("Enter String\n");
    scanf("%[^'\n']s",Arr);


    printf("\n");

    StrlwrX(Arr);    //Function Call

    return 0;
}
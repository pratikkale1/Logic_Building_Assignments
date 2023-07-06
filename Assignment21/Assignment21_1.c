/*
    Row = 6
    col = 6

        $  *   *   *   *   $
        $  *   *   *   *   $
        $  *   *   *   *   $
        $  *   *   *   *   $
        $  *   *   *   *   $
        $  *   *   *   *   $


*/

#include<stdio.h>

void Display(int iRow , int iCol)
{
    int i = 0, j = 0 , k = ;


    for(i = 1; i <=iRow ; i++ )
    {
        for(j=1 ; j <=iCol ; j++,k++)
        {
            if(k<=9)
            {
                printf("%d\t",k);
            }

        }
        printf("\n");
    }

}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows\n");
    scanf("%d",&iValue1);

    printf("Enter number of Column\n");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);
    
    return 0;
}
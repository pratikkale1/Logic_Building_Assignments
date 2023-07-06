/*
    Row = 6
    col = 6

        $  $   $   $   $   $
        $  *   *   *   *   $
        $  *   *   *   *   $
        $  *   *   *   *   $
        $  *   *   *   *   $
        $  $   $   $   $   $


*/

#include<stdio.h>

void Display(int iRow , int iCol)
{
    int i = 0, j = 0 ,iCnt = 1;


    for(i = 1; i <=iRow ; i++)
    {
        for(j=1 ; j <=iCol ; j++,iCnt++)
        {
            if(iCnt%2==0)
            {
                printf("%d\t",iCnt);
            }

            else
            {
                printf("%d\t",iCnt);
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
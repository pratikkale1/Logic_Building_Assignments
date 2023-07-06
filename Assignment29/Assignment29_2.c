#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE head, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if(*head == NULL)
    {
        *head = newn;
    }
    else
    {
        newn->next = *head;
        *head = newn;
    }
}

void PrimeNo(PNODE head)
{
    int iCnt = 0;
    int iSum = 0;

    while(head != NULL)
    {
		iSum =0;
		
        for(iCnt = 1 ; iCnt<(head->data) ; iCnt++)
        {
            if((head->data)%iCnt == 0)
            {
				// printf("%d\n",iCnt);
				
                iSum = iSum+iCnt;
            }
        }
		
		if(iSum == head->data)
		{
			printf(" Prime number is %d\n",head->data);
		}
	 
        head = head->next;
    }
}

int main()
{
    PNODE first = NULL;


    InsertFirst(&first,89);
    InsertFirst(&first,6);
    InsertFirst(&first,41);
    InsertFirst(&first,17);
    InsertFirst(&first,28);
    InsertFirst(&first,11);

	PrimeNo(first);


	return 0;
}
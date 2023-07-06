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
\
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

int EvenAddition(PNODE head)
{
    int iSum = 0;

    while(head != NULL)
    {		
		if((head->data)%2 ==0)
        {
		
			iSum =iSum+(head->data);
			
        }
	 
        head = head->next;
		
		
    }
	
	return iSum;
}

int main()
{
    PNODE first = NULL;
	int iRet = 0; 

    InsertFirst(&first,89);
    InsertFirst(&first,6);
    InsertFirst(&first,41);
    InsertFirst(&first,17);
    InsertFirst(&first,28);
    InsertFirst(&first,11);

	iRet = EvenAddition(first);

	printf("Addition of even nodes : %d\n",iRet);
	
	return 0;
}
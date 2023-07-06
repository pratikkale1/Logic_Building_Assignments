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

int SecondMax(PNODE head)
{
    int iMax = head->data;
	int iMax1 = head->data;
	PNODE temp =head;
			
    while(head != NULL)
    {	
		
		
		if(iMax<(head->data))
        {
				
			iMax = head->data;
			
        }
		
		head = head->next;
		
    }
	
	head =temp;
	
	while(head != NULL)
    {	

		if(iMax1<(head->data) && (head->data)<iMax)
        {
				
			iMax1 = head->data;
			
        }
		
		head = head->next;
		
    }
	
	return iMax1;
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

	iRet = SecondMax(first);

	printf("Second Max Number is : %d\n",iRet);
	
	return 0;
}
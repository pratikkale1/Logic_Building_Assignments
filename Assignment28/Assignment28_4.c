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

int Maximum(PNODE head)
{
	int iMax = head-> data;

    while(head != NULL)
    {	
		if(head->data>iMax)
		{
			iMax=head->data;
		}
		
		head=head->next;
    }
	
	return iMax;
}

int main()
{
    PNODE first = NULL;
    int ret = 0;

    InsertFirst(&first,240);
    InsertFirst(&first,320);
    InsertFirst(&first,220);
    InsertFirst(&first,110);

    ret = Maximum(first);
    
    printf("Larger Node : %d\n", ret);

	return 0;
}
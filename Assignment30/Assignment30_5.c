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

// Display Largest Digit

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

void DisplayLarge(PNODE head)
{
	int iDigit =0;
	int Product =0;
	int iLargeDigit =0;
	int No = head->data;
	
    while(head != NULL)
    {	
		No=head->data;
		iLargeDigit = No%10;
		while(No!=0)
		{	
			iDigit = No%10;
			
			if(iDigit>iLargeDigit)
			{
				iLargeDigit = iDigit;
			}
			No = No/10;	
		}
		
			printf("%d\n",iLargeDigit);

		
		head = head->next;
		
    }

}

int main()
{
    PNODE first = NULL;
	 
	 InsertFirst(&first,49);
    InsertFirst(&first,89);
    InsertFirst(&first,414);
    InsertFirst(&first,17);
    InsertFirst(&first,638);
    InsertFirst(&first,453);

	DisplayLarge(first);
	
	return 0;
}
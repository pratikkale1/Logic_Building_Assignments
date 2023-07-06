// Display product of each Digit

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

void ProductNO(PNODE head)
{
	int iDigit =0;
	int Product =0;
	int No = head->data;
	
    while(head != NULL)
    {	
		No=head->data;
		Product =1;
		
		while(No!=0)
		{
			iDigit = No%10;
			
			if(iDigit ==0)
			{
				iDigit = 1;
			}
			Product = Product*iDigit;
			
			No = No/10;	
		}
		
			printf("%d\n",Product);

		
		head = head->next;
		
    }

}

int main()
{
    PNODE first = NULL;
	 

    InsertFirst(&first,89);
    InsertFirst(&first,6);
    InsertFirst(&first,414);
    InsertFirst(&first,17);
    InsertFirst(&first,28);
    InsertFirst(&first,11);

	ProductNO(first);
	
	return 0;
}
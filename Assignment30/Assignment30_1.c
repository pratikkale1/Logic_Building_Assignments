// Display Reverse number

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

void Reverse(PNODE head)
{
	int iDigit =0;
	int ReverseNO =0;
	int No = head->data;
	
    while(head != NULL)
    {	
		No=head->data;
		ReverseNO =0;
		
		while(No!=0)
		{
			iDigit = No%10;
			
			ReverseNO =(ReverseNO*10)+iDigit;
			
			No = No/10;	
		}
		
		
		
		printf("%d\n",ReverseNO);
		
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

	Reverse(first);
	
	return 0;
}
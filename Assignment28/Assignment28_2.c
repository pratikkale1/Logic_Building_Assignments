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

int count(PNODE head)
{
	int iCount=0;
	
	while(head != NULL)
	{
		iCount++;
		
		head = head->next;
	}
	
	return iCount;
}

int SearchLastOcc(PNODE head, int no)
{
    int iCount = 1;
    int LastPos = 0;

    while(head != NULL)
    {	
		
        if(head->data == no)
        {
            LastPos = iCount;
        }

        iCount++;
        
        head = head->next;
    }

    return LastPos;
}

int main()
{
    PNODE first = NULL;
    int ret = 0;
    int iNo =0;

    printf("Enter number\n");
    scanf("%d",&iNo);

    InsertFirst(&first,70);
    InsertFirst(&first,30);
    InsertFirst(&first,20);
    InsertFirst(&first,40);
    InsertFirst(&first,30);
    InsertFirst(&first,20);
    InsertFirst(&first,10);
	
	count(first);

    ret = SearchLastOcc(first,iNo);
    
    printf("Position of given Number is : %d\n", ret);

	return 0;
}
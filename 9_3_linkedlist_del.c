#include<stdio.h>
#include<malloc.h>
struct node{
	int data;
	struct node *next;
};
struct node *head=NULL;
void insert(int e)
{
	struct node *t;
	if(head == NULL)
	{
		head=(struct node *)malloc(sizeof(struct node));
		head->data=e;
		head->next=NULL;
	}
	else
	{
		t=head;
		while(t->next != NULL)
		{
			t=t->next;
		}
		t->next=(struct node *)malloc(sizeof(struct node));
		t->next->data=e;
		t->next->next=NULL;
	}
}
void delete_start()
{
	if(head == NULL)
		printf("Linked list is empty");
	else
		head=head->next;
}
void delete_element(int e)
{
	struct node *t;
	if(head == NULL)
	{
		printf("Empty linked list");
	}
	else if(head->data == e)
	{
		head=head->next;
	}
	else
	{
		t=head;
		while(t->next!=NULL && t->next->data!=e)
		{
			t=t->next;
		}
		if(t->next == NULL)
		{
			printf("\n element not found");
		}
		else
		{
			t->next=t->next->next;
		}
		
	}
}
void delete_end()
{
	struct node *t;
	if(head == NULL)
		printf("Empty linked list");
	else if(head->next==NULL)
		head=NULL;
	else
	{
		t=head;
   		while(t->next->next!=NULL)
    	{
   	   		t=t->next;
		}
		t->next=NULL;
	}
}
void disp()
{
	struct node *t;
	if(head==NULL)
		printf("\nEmpty linked list");
	else
	{
		t=head;
		printf("\n");
		while(t!=NULL)
		{
			printf("%d\t",t->data);
			t=t->next;
		}
		printf("\n");
	}
}
int menu()
{
	int ch;
	printf("1-Insert the element\n 2-Delete from begining\n 3-Delete from end\n 4-Delete In between element\n 5-Display\n 6-Exit");
	printf("\nEnter your choice");
	scanf("%d",&ch);
	return ch;
}
int main()
{
	int ch;
	for(ch=menu();ch!=6;ch=menu())
	{
		switch(ch)
		{
			case 1:printf("Enter the element you want to insert:");
			scanf("%d",&ch);
			insert(ch);
			break;
			case 2:
			delete_start(ch);
			break;
			case 3:
			delete_end(ch);
			break;
			case 4:printf("Enter the element you want to delete in between:");
			scanf("%d",&ch);
			delete_element(ch);
			break;
			case 5:disp();
			break;
			default:printf("Invalid choice");
			break;
		}
		printf("\n");
	}
}

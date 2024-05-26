#include<stdio.h>
#include<malloc.h>
struct node {
	int data;
	struct node *next;
};
struct node *head=NULL;
void insert_end(int e)
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
void insert_start(int e)
{
	struct node *t;
	t=(struct node *)malloc(sizeof(struct node));
	t->data=e;
	t->next=head;
	head=t;
}
void insert_between(int e)
{
	struct node *t,*t2;
	int n;
	if(head == NULL)
	{
		printf("\nLinked list is empty");
	}
	else
	{
		printf("\nEnter the number after which you want to insert %d: ",e);
		scanf("%d",&n);
		t=head;
		while(t!=NULL && t->data!=n)
		{
			t=t->next;
		}
		if(t==NULL)
			printf("Element not found");
		else
		{
			t2=t->next;
			t->next=(struct node *)malloc(sizeof(struct node));
			t->next->data=e;
			t->next->next=t2;	
		}
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
	printf("1-Insert at the begining\n 2-Insert at the end\n 3-Insert in between the elements\n 4-Display\n 5-Exit");
	printf("\nEnter your choice");
	scanf("%d",&ch);
	return ch;
}
int main()
{
	int ch;
	for(ch=menu();ch!=4;ch=menu())
	{
		switch(ch)
		{
			case 1:printf("Enter the element you want to insert at the begining:");
			scanf("%d",&ch);
			insert_start(ch);
			break;
			case 2:printf("Enter the element you want to insert at the end:");
			scanf("%d",&ch);
			insert_end(ch);
			break;
			case 3:printf("Enter the element you want to insert in between:");
			scanf("%d",&ch);
			insert_between(ch);
			break;
			case 4:disp();
			break;
			default:printf("Invalid choice");
			break;
		}
		printf("\n");
	}
}

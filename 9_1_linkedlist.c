#include<stdio.h>
#include<malloc.h>
struct node 
{
	int data;
	struct node *next;
};
struct node *head=NULL;
void insert(int e)
{
	struct node *t;
	if(head==NULL)
	{
		head=(struct node *)malloc(sizeof(struct node));
		head->data=e;
		head->next=NULL;
	}
	else
	{
		t=head;
		while(t->next!=NULL)
		{
			t=t->next;
		}
		t->next=(struct node *)malloc(sizeof(struct node));
		t->next->data=e;
		t->next->next=NULL;
	}
}
void disp()
{
	struct node *t;
	if(head==NULL)
	{
		printf("\n Linked list is empty");
	}
	else
	{
		t=head;
		while(t!=NULL)
		{
			printf("%d\t",t->data);
			t=t->next;
		}
	}
}
int menu()
{
	int ch;
	printf("\n1-Insert\n 2-Display\n 3-Exit\n Enter your choice:");
	scanf("%d",&ch);
	return ch;
}
void process()
{
	int ch;
	for(ch=menu();ch!=3;ch=menu())
	{
		switch(ch)
		{
			case 1:printf("Enter the element:");
			scanf("%d",&ch);
			insert(ch);
			break;
			case 2:disp();
			break;
			default:printf("Invalid choice");
			break;
		}
	}
}
int main()
{
	process();
	return 0;
}
	


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
		head->next=head;
	}
	else
	{
		t=head;
		while(t->next!=head)
		{
			t=t->next;
		}
		t->next=(struct node *)malloc(sizeof(struct node));
		t->next->data=e;
		t->next->next=head;
	}
}
void disp()
{
	struct node *t;
	if(head == NULL)
		printf("Empty");
	else
	{
		t=head;
		printf("\n");
		do{
			printf("%d\t",t->data);
			t=t->next;
		}while(t!=head);
	}
}
void delete(int e)
{
	struct node *t;
	if(head == NULL)
		printf("Circular linked list is empty");
	else if(head->data==e && head->next == head)
	{
		head=NULL;
	}
	else if(head->data==e)
	{
		t=head;
		while(t->next != head){
			t=t->next;
		}
		t->next=head->next;
		head=head->next;
	}
	else
	{
		t=head;
		while(t->next!=head && t->next->data !=e)
		{
			t=t->next;
		}
		if(t->next == head)
		{
			printf("element not found");
		}
		else
		{
			t->next=t->next->next;
		}
	}
}
int menu()
{
	int ch;
	printf("\n INSERT-1 \n DELETE-2\n DISPLAY-3\n Exit-4\n Enter your choice:");
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
			case 1:printf("Enter the element to be inserted:");
			scanf("%d",&ch);
			insert(ch);
			break;
			case 2:printf("Enter the element to be deleted:");
			scanf("%d",&ch);
			delete(ch);
			break;
			case 3:disp();
			break;
			default:printf("Invalid choice");
			break;
		}
	}
	return 0;
}

#include<stdio.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *next;
};
typedef struct node queue;
queue *f=NULL,*r=NULL;
void enqueue(int e)
{
	queue *t=(queue *)malloc(sizeof(queue));
	t->data=e;
	t->next=NULL;
	if(f==NULL)
	{
		f=t;
		r=t;
	}
	else
	{
		r->next=t;
		r=t;
	}
}
void dequeue()
{
	if(f==NULL)
		printf("Queue is empty");
	else
	{
		printf("Deleted element:%d\t",f->data);
		f=f->next;
		if(f==NULL)
			r=NULL;
	}
}
void disp()
{
	struct node *t;
	if(f == NULL)
		printf("\n Linked queue is empty");
	else
	{
		t=f;
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
	printf("\nENQUEUE-1 \n DEQUEUE-2\n DISPLAY-3\n Exit-4\n Enter your choice:");
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
			enqueue(ch);
			break;
			case 2:dequeue();
			break;
			case 3:disp();
			break;
			default:printf("Invalid choice");
			break;
		}
	}
	return 0;
}

#include<stdio.h>
#include<malloc.h>
struct node{
	int data;
	struct node *next;
};
typedef struct node queue;
queue *front=NULL;
queue *rear=NULL;
void enqueue(int e)
{
	queue *t=(queue *)malloc(sizeof(queue));
	t->data=e;
	if(front == NULL)
	{
		front=t;
		rear=t;
	}
	else
	{
		rear->next=t;
		rear=t;
	}
	rear->next=front;
}
void dequeue()
{
	if(front == NULL)
	{
		printf("Circular linked queue is empty");
	}
	else
	{
		printf("%d\t",front->data);
		if(front->next == front)
		{
			front=NULL;
			rear=NULL;
		}
		else
		{
			front=front->next;
			rear->next=front;
		}
	}
}
void disp()
{
	if(front==NULL)
	{
		printf("Empty circular linked queue");
	}
	else
	{
		queue *t=front;
		do
		{
			printf("%d\t",t->data);
			t=t->next;
		}while(t!=front);
	}
}
int menu()
{
    int ch;
    printf("\nEnqueue - 1\nDequeue - 2\nDisplay - 3\nExit - 4\n");
    printf("Enter your choice : ");
    scanf("%d",&ch);
    return ch;
}

int main()
{
    int i,ch,a;
    for(ch = menu();ch != 4;ch = menu())
    {
        switch(ch)
        {
            case 1 : printf("Enter an element to insert : ");
            		 scanf("%d",&a);
					 enqueue(a);
                     break;
            case 2 : dequeue();
                     break;
            case 3 : disp();
                     break;
            default : printf("Wrong Choice!!!\n");
                      break;
        }
    }
    return 0;
}

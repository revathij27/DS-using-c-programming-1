#include<stdio.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *next;
};
typedef struct node stack;
stack *top=NULL;
void push(int e)
{
	stack *t=(stack *)malloc(sizeof(stack));
	t->data=e;
	t->next=top;
	top=t;
}
void pop()
{
	if(top == NULL)
		printf("Empty Stack");
	else{
		printf("\nDeleted element:%d",top->data);
		top=top->next;
	}
}
void peek()
{
	if(top==NULL)
		printf("Linked list is empty");
	else
		printf("Topmost element:%d\t",top->data);
}
int menu()
{
	int ch;
	printf("\nPUSH-1 \n POP-2\n PEEK-3\n Exit-4\n Enter your choice:");
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
			push(ch);
			break;
			case 2:pop();
			break;
			case 3:peek();
			break;
			default:printf("Invalid choice");
			break;
		}
	}
	return 0;
}

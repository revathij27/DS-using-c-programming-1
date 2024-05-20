#include<stdio.h>
int s[5],top=-1;
void push(int e)
{
	if(top+1==5)
	{
		printf("Stack is full");
	}
	else
	{
		s[++top]=e;
	}
}
void pop()
{
	if(top==-1)
	{
		printf("Stack is empty");
	}
	else
	{
		printf("Deleted element:%d",s[top--]);
	}
}
void peek()
{
	if(top==-1)
	{
		printf("Stack is empty");
	}
	else
	{
		printf("topmost element is %d",s[top]);
	}
}
int menu()
{
	int ch;
	printf("\nPush-1\n Pop-2\n Peek-3\n Exit-4\n Enter your choice:");
	scanf("%d",&ch);
	return ch;
}
void process()
{
	int ch;
	for(ch=menu();ch!=4;ch=menu())
	{
		switch(ch)
		{
			case 1:printf("enter the element:");
			scanf("%d",&ch);
			push(ch);
			break;
			case 2:pop();
			break;
			case 3:peek();
			break;
			default:printf("Invalid choice");
		}
	}
}
int main()
{
	process();
	return 0;
}

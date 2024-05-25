#include<stdio.h>
int q[5];
int f=-1;
int r=-1;
void enqueue()
{
	if(r+1==5)
	{
		printf("\n Error:Queue is full");
	}
	else
	{
		if(f==-1)
		{
			f=0;
		}
		printf("enter the value:");
		scanf("%d",&q[++r]);
	}
}
void dequeue()
{
	int i;
	if(f==-1)
	{
		printf("\n Error:Queue is empty");
	}
	else
	{
		printf("\n Dequeued item:%d",q[f]);
		if(f==r)
		{
			f=r=-1;
		}
		else
		{
			for(i=0;i<r;i++)
			{
				q[i]=q[i+1];
			}
		}
		r--;
	}
}
void display()
{
	int i;
	for(i=f;i<=r;i++)
	{
		printf("%d\t",q[i]);
	}
	printf("\n");
}
int menu()
{
	int ch;
	printf("Enqueue-1\n Dequeue-2\n Display-3\n Exit-4\n Enter your choice:");
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
			case 1:enqueue();
			break;
			case 2:dequeue();
			break;
			case 3:display();
			break;
			default:printf("Invalid choice");
		}
	}
	return 0;	
}

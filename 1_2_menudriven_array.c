#include<stdio.h>
int a[5],pos=-1;
void insert(int e)
{
	if(pos+1==5)
	{
		printf("Array is full\n");
	}
	else
	{
		a[++pos]=e;
	}
}
void delete()
{
	if(pos==-1)
	{
		printf("Array is empty\n");
	}
	else
	{
		printf("Deleted element is %d\n",a[pos--]);
	}
}
void search()
{
	int i,s,flag;
	printf("Enter the element to be searched:");
	scanf("%d",&s);
	for(i=0;i<pos;i++)
	{
		if(a[i]==s)
		{
			flag=0;
			printf("The element is found at position %d\n",i);
			break;
		}
		if(flag==1)
		{
			printf("Entered element is not found\n");
		}
	}
}
void sort()
{
	int i,j,temp;
	for(i=0;i<pos;i++)
	{
		for(j=i+1;j<=pos;j++)
		{
			{
				if(a[i]>a[j])
				{
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
			}
		}
	}
}
void display()
{
	int i;
	for(i=0;i<=pos;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
}
int menu()
{
	int ch;
	printf("Insert-1\n Search-2\n Delete-3\n Sort-4\n Display-5\n Exit-6\n Enter your choice:\n");
	scanf("%d",&ch);
	return ch;
}
void process()
{
	int ch;
	for(ch=menu();ch!=6;ch=menu())
	{
		switch(ch)
		{
			case 1:printf("Enter the element:");
			scanf("%d",&ch);
			insert(ch);
			break;
			case 2:search();
			break;
			case 3:delete();
			break;
			case 4:sort();
			break;
			case 5:display();
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


#include<stdio.h>
int insert(int a[],int pos,int e)
{
	if(pos+1==5)
	{
		printf("Array is full");
	}
	else
	{
		a[++pos]=e;
	}
	return pos;
}
int delete(int a[],int pos)
{
	if(pos==-1)
	{
		printf("Array is empty");
	}
	else
	{
		printf("Deleted element:%d",a[pos--]);
	}
	return pos;
}
int search(int a[],int pos)
{
	int s, i, flag = 0;
    printf("Enter the element to search for: ");
    scanf("%d", &s);
    for (i = 0; i <= pos; i++)
    {
        if (a[i] == s)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("%d found in the array at %d\n", s, i);
    }
    else
    {
        printf("%d not found in the array.\n", s);
    }
}
int sort(int a[],int pos)
{
	int i, j, temp;
    for (i = 0; i < pos; i++)
    {
        for (j = i+1; j <= pos; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
void display(int a[],int pos)
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
	printf("\nInsert-1\n Delete-2\n Search-3\n Sort-4\n Display-5\n Exit-6\n enter your choice:");
	scanf("%d",&ch);
	return ch;
}
void process()
{
	int ch;
	int a[5],pos=-1;
	for(ch=menu();ch!=6;ch=menu())
	{
		switch(ch)
		{
			case 1:printf("\n enter the element:");
			scanf("%d",&ch);
			pos=insert(a,pos,ch);
			break;
			case 2:pos=delete(a,pos);
			break;
			case 3:pos=search(a,pos);
			break;
			case 4:pos=sort(a,pos);
			break;
			case 5:display(a,pos);
			break;
			default:printf("\n invalid choice");
			
		}
	}
}
int main()
{
	process();
	return 0;
}

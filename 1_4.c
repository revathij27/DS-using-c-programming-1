#include<stdio.h>
int main()
{
	int a[10],n,i,num,count=0;
	printf("Enter the no of elements:");
	scanf("%d",&n);
	printf("Enter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The elements are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\nEnter the element to be searched:");
	scanf("%d",&num);
	for(i=0;i<n;i++)
	{
		if(a[i]==num)
		{
			printf("Element is found at postion no %d\n",i);
			count++;
		}
	}
	printf("Element is found %d times",count);
	return 0;	
}

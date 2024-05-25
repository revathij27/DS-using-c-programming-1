#include<stdio.h>
#include<malloc.h>
int main()
{
	int *p;
	int n,i,sum=0;
	float mean;
	printf("Enter the no:");
	scanf("%d",&n);
	printf("Enter the elements:");
	p=(int *)malloc(n * sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
		sum=sum+ *(p+1);
	}
	mean=sum/n;
	printf("Mean=%f",mean);
	return 0;
	
}

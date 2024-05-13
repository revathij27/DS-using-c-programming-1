#include<stdio.h>
int n;
void disp(int a[],int i)
{
	if(i>=0)
	{
		printf("%d\t",a[i]);
		i--;
		disp(a,i);
	}
}
int main()
{
	int a[n],i;
	printf("Enter size of the array : ");
	scanf("%d",&n);
	printf("Enter elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Array elements in the reverse order:\n ");
	disp(a,n-1);
	printf("\n");
	return 0;
}

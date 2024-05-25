#include<stdio.h>
#include<malloc.h>
int main()
{
	int *a;
	a=(int *)malloc(1*sizeof(int));
	printf("Enter a value:");
	scanf("%d",a);
	printf("value of a=%d\n",*a);
	int *b;
	b=(int *)calloc(1,sizeof(int));
	printf("Enter a value of b:");
	scanf("%d",b);
	printf("value of b=%d",*b);
	free(a);
	free(b);
	return 0;
}

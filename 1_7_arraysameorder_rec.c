#include <stdio.h>
int n;
void disp(int a[]) 
{
	static int i=0;
	if(i<n)
	{
		printf("%d\t",a[i]);
		i++;
		disp(a);
	}
}
int main() 
{
    int i,a[n];
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) 
	{
        scanf("%d", &a[i]);
    }
    printf("Array elements in the same order:\n ");
    disp(a);
    printf("\n");
    return 0;
}

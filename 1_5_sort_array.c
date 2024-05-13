#include <stdio.h>

void read(int a[], int s) 
{
	int i;
    printf("Enter %d elements:\n", s);
    for (i = 0; i < s; i++) 
	{
        scanf("%d", &a[i]);
    }
}

void disp(int a[], int s) 
{
	int i;
    printf("Array elements: ");
    for (i = 0; i < s; i++) 
	{
        printf("%d ", a[i]);
    }
    printf("\n");
}

void sort(int a[], int s) 
{
    int i,j,temp;
	for(i=0;i<s-1;i++)
	{
		for(j=0;j<s-i-1;j++)
		{
			{
				if(a[j]>a[j+1])
				{
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
			}
		}
	}
}

int main() {
    int s;
	int a[s];
    printf("Enter the size of the array: ");
    scanf("%d", &s);
	read(a,s);
    printf("Array before sorting:\n");
    disp(a,s);
    sort(a,s);
    printf("Array after sorting in ascending order:\n");
    disp(a,s);
    return 0;
}


#include <stdio.h>
#include <malloc.h>
void read(int *ptr,int n)
{
    int i;
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",ptr+i);
    }
}
void mode(int *ptr,int n)
{
   int large = 0, i, j,k=0, count;
   int a[10];
   for (i = 0; i < n; ++i) 
   {
      count = 0;
      for (j = i; j < n; ++j)
      {
         if (*(ptr + j) == *(ptr + i))
            ++count;
      }
      if (count >= large)
      {
         if (count > large)
            k=0;
         a[k] = *(ptr + i);
         large = count;
         k++;
      }
   }
    if(k==1)
        printf("The mode is %d",a[0]);
    else
    {
        printf("The modes are : ");
        for(i=0;i<k;i++)
            printf("%d\t",a[i]);
    }
}
void main()
{
    int i,n;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    int *ptr = (int *) calloc(n,sizeof(int));
    read(ptr,n);
    mode(ptr,n);
}


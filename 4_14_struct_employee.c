#include<stdio.h>
struct employee{
	char empno[20];
	char empname[25];
	int sal;
	char deptno[20];
};
void read(struct employee emp[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("Enter employee no:");
		scanf("%s",emp[i].empno);
		printf("Enter employee name:");
		scanf("%s",emp[i].empname);
		printf("Enter the salary:");
		scanf("%d",&emp[i].sal);
		printf("Enter the department no:");
		scanf("%s",emp[i].deptno);
		printf("\n");
	}	
}
void disp(struct employee emp[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("Employee no:%s\n",emp[i].empno);
		printf("Employee name:%s\n",emp[i].empname);
		printf("Employee salary:%d\n",emp[i].sal);
		printf("Department no:%s\n",emp[i].deptno);
	}
	printf("\n");
}
void search(struct employee emp[],int n)
{
    char search_empno[20];
    printf("Enter the employee number to search: ");
    scanf("%s", search_empno);

    int i, found = 0;
    for (i = 0; i < n; i++) {
        if (strcmp(emp[i].empno, search_empno) == 0) {
            found = 1;
            printf("Employee found\n");
            printf("Employee no: %s\n", emp[i].empno);
            printf("Employee name: %s\n", emp[i].empname);
            printf("Employee salary: %d\n", emp[i].sal);
            printf("Department no: %s\n", emp[i].deptno);
            break;
        }
    }

    if (found==0) {
        printf("Employee with the given employee number not found.\n");
    }
}
void sort(struct employee emp[],int n)
{
	struct employee temp;
	int i,j;
	for(i=0;i<n-1;i++)
		{
		for(j=i+1;j<n;j++)
		{
			if(emp[i].sal > emp[j].sal)
			{
				temp=emp[i];
				emp[i]=emp[j];
				emp[j]=temp;
			}
		}
	}
	printf("\nSorting by salary");
	for(i=0;i<n;i++)
	{
		
       printf("\nEmployee name: %s\n", emp[i].empname);
        printf("Employee salary: %d\n", emp[i].sal);
	}
	
	
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(strcmp(emp[i].empname,emp[j].empname) >0 )
			{
				temp=emp[i];
				emp[i]=emp[j];
				emp[j]=temp;
			}
		}
	}
	printf("\nSorting by Name:");
	for(i=0;i<n;i++)
	{
        printf("\nEmployee name: %s\n", emp[i].empname);
        printf("Employee salary: %d\n", emp[i].sal);
	}
}
void delete_emp(struct employee emp[],int n)
{
	int i,j,found=0;
	char empno[20];
	printf("enter the employee no to be deleted:");
	scanf("%s",empno);
	for(i=0;i<=n;i++)
	{
		if(strcmp(emp[i].empno, empno)==0)
		{
			found=1;
			printf("Deleted employee details\n");
            printf("Employee no: %s\n", emp[i].empno);
            printf("Employee name: %s\n", emp[i].empname);
            printf("Employee salary: %d\n", emp[i].sal);
            printf("Department no: %s\n", emp[i].deptno);
            for(j=i;j<=n-1;j++)
			{
				emp[j]=emp[j+1];
			}
			n--;
			printf("Employee deleted");
			break;
		}
		
	}
	if(found==0)
	{
		printf("Employee not found");
	}	
}
int menu()
{
	int ch;
	printf("\n Insert-1\n Display-2\n Search-3\n Sort-4\n Delete-5\n Exit-6\n Enter your choice:");
	scanf("%d",&ch);
	return ch;
}
int main()
{
	struct employee emp[20];
	int n,ch;
	for(ch=menu();ch!=6;ch=menu())
	{
		switch(ch)
		{
			case 1:printf("Enter the no of employees:");
			scanf("%d",&n);
			read(emp,n);
			break;
			case 2:disp(emp,n);
			break;
			case 3:search(emp,n);
			break;
			case 4:sort(emp,n);
			break;
			case 5:delete_emp(emp,n);
			break;
			default:printf("Invalid choice");
		}
	}
	return 0;
}




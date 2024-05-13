#include<stdio.h>
int global=5;

void main()
{
	register int reg;
	int local=2,b=3;
	printf("Value of local variable:%d\n",local);
	printf("Value of Global variable:%d\n",global);
	reg=local+b;
	reg=reg+10;
	printf("Value of register variable is:%d\n",reg);
	disp();
	disp();
}
int disp()
{
	static int static_var;
	printf("Value of static variable is:%d\n",static_var);
	static_var++;
	return 0;
}


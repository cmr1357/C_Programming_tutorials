//POINTERS

#include<stdio.h>
int main()
{
	int *p;
	int var=10;
	p=&var;
	
	printf("Value of variable var is  :%d\n",var);
	printf("Value of variable var is  :%d\n",*p);
	printf("Address of variablevar is :%p\n",&var);
	printf("Address of variablevar is :%p\n",p);
	printf("Address of pointer p is   :%p\n",&p);
	
	return 0;
}
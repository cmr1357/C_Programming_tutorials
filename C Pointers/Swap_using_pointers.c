//Swap two numbers using pointers
#include<stdio.h>
int main()
{
	int i=10,j=20,temp;
	int *p=&i,*k;
	//p=&i;
	k=&j;
	
	printf("Value of i and j before swap = %d,%d\n",*p,*k);
	temp=*p;
	*p=*k;
	*k=temp;
	printf("Value of i and j after swap = %d,%d",*p,*k);
	
	
	return 0;
}
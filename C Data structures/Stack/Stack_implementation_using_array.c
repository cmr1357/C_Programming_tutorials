//Stack implementation using array
#include<stdio.h>
#define MAX 4
int stack_arr[MAX],top=-1;
void push(int a);
int main()
{
	push(1);
	push(2);
	push(3);
	push(4);
//	push(5);
	return 0;
}
void push(int a)
{
	if(top==MAX-1)
	{
		printf("stack overflow");
		return;
	}
	top +=1;
	stack_arr[top]=a;
}

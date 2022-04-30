//Stack implementation using array
#include<stdio.h>
#include<stdlib.h>
#define MAX 4
int stack_arr[MAX],top=-1;
void push(int a);
int pop();
void print();
int main()
{
	int data;
	push(1);
	push(2);
	push(3);
	push(4);
	print();
	data=pop();
	data=pop();
	print();
	
	data=pop();
	data=pop();
	
	data=pop();
	
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
int pop()
{
	int value;
	if(top==-1)
	{
		printf("Stack under flow\n");
		exit(1);// abnormal termination of the program
	}
	value=stack_arr[top];
	top -=1;
	return value;
}
void print()
{
	int i;
	if(top==-1)
	{
		printf("stack underflow\n");
		return;
	}
	for(i=top;i>=0;i--)
	{
		printf("%d",stack_arr[i]);
	}
	printf("\n");
}

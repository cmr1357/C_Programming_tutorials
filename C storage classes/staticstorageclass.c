//static storage class

static int count=5;
#include<stdio.h>
int main()
{
	
	while(count--)
	{
		fun();
	}
	return 0;
}
void fun(void)
{
	printf("count=%d\n",count);
	
}
//goto statement in c
#include<stdio.h>
int main()
{
	int a=10,b=20,c;
	
	goto rectangle;
	
	printf("sum=%d\n",a+b);
	printf("hello\n");
	
	
	
	
	rectangle:
		printf("area= %d\n",a*b);
	return 0;
}
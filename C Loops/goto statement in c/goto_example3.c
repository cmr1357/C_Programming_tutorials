//goto statement in c
#include<stdio.h>
int main()
{
	int a=10,b=20,c;
	
	goto rectangle;
	
	sum:
		printf("sum=%d\n",a+b);
		printf("hello\n");
	//	for(;;);
	
	
	
	
	rectangle:
	printf("area= %d\n",a*b);
	goto sum;
	return 0;
}
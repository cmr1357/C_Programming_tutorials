#include<stdio.h>
int main()
{
	int a=10,b=20,c;
	printf("The value of a and b before swap %d %d\n",a,b);
	c=a;
	a=b;
	b=c;
	printf("The value of a and b after swap %d %d\n",a,b);
	
//	printf("%d  + %d = %d",a,b,c);
	return 0;
}
//Bitwise left shift operator
#include<stdio.h>
int main()
{
	int a=1;//binary 0001
	int b=1,c;
	c=a<<b;//0010
	printf("Value of c =%d\n",c);
	c=a<<b;//0010
	printf("Value of c =%d\n",c);
	b=2;
	c=a<<b;//1000
	printf("Value of c =%d\n",c);
	
	b=1;
	printf("Value of a = %d\n",a);
	a=a<<b;
	printf("Value of a = %d\n",a);
	a=a<<b;
	printf("Value of a = %d\n",a);
	a=a<<b;
	printf("Value of a = %d\n",a);
	return 0;
}
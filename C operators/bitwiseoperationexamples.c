//BitWise operations in C

#include<stdio.h>
int main()
{
	unsigned int a=60; /*binary=0011 1100*/
	unsigned int b=13; /*binary=0000 1101*/
	int c=0;
	
	c=a&b; /*12=0000 1100*/
	printf(" Value of C after bitwise and operation = %d \n",c);
	
	c=a|b;/*61=0011 1101*/
	printf(" Value of C after bitwise or operation = %d \n",c);
	
	c=a^b;/*49=0011 0001*/
	printf(" Value of C after bitwise xor operation = %d \n",c);
	
	c=~a; /*-61=1100 0011*///-(x+1)
	printf(" Value of C after bitwise not operation = %d \n",c);
	printf("Size of int= %d bytes\n",sizeof(a));
	c=a<<4; /*240=1111 0000*/
	printf(" Value of C after leftshift = %d \n",c);
	
	c=a>>4; /*15=0000 1111*/
	printf(" Value of C after rigtshift = %d \n",c);
	
	
	return 0;
}
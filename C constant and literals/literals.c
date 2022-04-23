//Literals

#include<stdio.h>
int main()
{
	const int a=123;//decimal number
	const int b=0X24;//hexadecimal number
	
	const float f=3.14;//floating point
	
	
	printf("decimal number=%d\n",a);//'\n' is the new line character for a new line
	printf("hexadecimal number=%d",b);
	
	printf("\tfloating number=%f",f);//'\t' is for a tab space
	
	printf("\nHello World\n");
	printf("\nHello,\
	 Dear\n");
	printf("Hello" "Dear");

	
	return 0;
}
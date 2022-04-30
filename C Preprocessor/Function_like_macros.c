//Function like macros
//#define Macro(parameter)Expression
//#define sum(a,b)a+b// in this sum(a,b) is replaced with a+b expression.
#include<stdio.h>
#define sum(a,b)a+b
int main()
{
	int s, a=5,b=3;
	s=sum(a,b);
	printf("Addition = %d",s);
}
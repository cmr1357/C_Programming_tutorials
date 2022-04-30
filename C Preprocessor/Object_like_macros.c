//Object like macros
//# define macro macro_value
//#define A 10// a constant
#include<stdio.h>
#define pi 3.14
int main()
{
	float area,r=5;
	area=pi*r*r;
	printf("Area of circle=%f",area);
}
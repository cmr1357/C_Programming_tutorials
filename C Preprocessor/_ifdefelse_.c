#include<stdio.h>
#define PI 3.14
//#define AREA
//#define IOS(portable comands)
int main()
{
	float r;
	printf("Enter the radius of circle\n");
	scanf("%f",&r);
	
	#ifdef AREA
	printf("Area of circle is %f\n",(PI*r*r));
	#else
	printf("Circumfreance of circle is %f\n",(2*PI*r));
	#endif
	
}
#include<stdio.h>
int main()
{
	int r;
	const float pi=3.14;
	float area,perimeter;
	
	printf("Enter the radius of the circle\n");
	scanf("%d",&r);

	area=pi*r*r;
	perimeter=2*pi*r;
	
	
	printf("Area = %f\n",area);
	printf("Perimeter = %f\n",perimeter);
	
	
	
}
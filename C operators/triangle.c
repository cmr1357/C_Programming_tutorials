//area  of triangle
#include<stdio.h>
int main()
{
	int base,height;
	float area;
	printf("Enter the base of triangle\n");
	scanf("%d",&base);
	printf("Enter the height of triangle\n");
	scanf("%d",&height);
	
	area=(base * height)/2;
	printf("Area of triangle = %f\n",area);
	area=(float)(base * height)/2;
	printf("Area of triangle = %f",area);
	area=.5*base*height;
	printf("Area of triangle = %f",area);
	return 0;
}
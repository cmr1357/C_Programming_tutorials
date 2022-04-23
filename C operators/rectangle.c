#include<stdio.h>
int main()
{
	int l,b,area,perimeter;
	printf("Enter the lenght :\n");
	scanf("%d",&l);
	printf("Enter the breadth :\n");
	scanf("%d",&b);
	area=l*b;
	perimeter=2*(l+b);
	printf("area= %d\n",area);
	printf("perimeter = %d\n", perimeter);
	
	return 0;
}
#include<stdio.h>
int main()
{
	enum point1{x=2,y=34,r,z=0};
	enum point2{x=2,k=34,j,r=0};//error redecalration of x not allowed.
	printf("%d,%d,%d,%d",x,y,r,z,k,j,r);
	return 0;
}
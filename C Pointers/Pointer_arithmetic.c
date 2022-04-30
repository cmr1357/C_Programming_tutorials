//Pointer arithmetic

#include<stdio.h>
int main()
{
	int i=3,*x;
	float j=1.5,l=9.2,*y,*p;
	char k='c',*z;
	printf("Value of i =%d\n",i);
	printf("Value of j =%f\n",j);
	printf("Value of k =%c\n",k);
	x=&i;
	y=&j;
	z=&k;
	p=&l;
	printf("Original address in x= %d\n",x);
	printf("Original address in y= %d\n",y);
	printf("Original address in z= %d\n",z);
	x++;
	y++;
	z++;
	printf("New address in x = %d \n",x);
	printf("New address in y = %d \n",y);
	printf("New address in z = %d \n",z);
	
	
	printf("Addition of a number to a pointer\n");
	x=x+1;
	printf("New address in x = %d \n",x);
	y=y-2;
	printf("New address in y = %d \n",y);
	
	printf("Substraction of one pointer from another\n");
	printf("y-p = %d, *y-*p= %f",(y-p),(*y-*p));//check this.
	
	return 0;
	
}
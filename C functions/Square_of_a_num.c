//square of number using function
#include<stdio.h>
int square(int num);
int main()
{
	int num;
	int n;
	printf(" Enter a number\n");
	scanf("%d",&num);
	n=square(num);
	printf("Square of %d =%d ",num,n);
	return 0;
}
int square(int num)
{
	return(num*num);
}
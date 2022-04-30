//DECIMAL TO BINARY METHOD-1
#include<stdio.h>
void bin(int);
int main()
{
	int n;
	printf("Enetr a number to convert\n");
	scanf("%d",&n);
	bin(n);
	
	return 0;
}
bin(int n)
{
	int a[10],i;
	for(i=0;n>0;i++)
	{
		a[i]=n%2;
		n=n/2;
	}
	printf("Binary of a given number is\n");
	for(i=i-1;i>=0;i--)
	{
		printf("%d",a[i]);
	}
	return ;
}
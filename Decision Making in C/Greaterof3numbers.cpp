# include <stdio.h>
int main()
{
	int a,b,c;
	printf("enter first number ");
	scanf("%d",&a); 
	printf("enter second number ");
	scanf("%d",&b); 
	printf("enter third number ");
	scanf("%d",&c); 
	
	if(a==b && b==c && a==c)
	{
		printf("all numbers are equal");
	}
	
	else if (a>b && a>c)
	{
		printf("a is larger");
	}
	
	else if(b>c)
	{
		printf("b is larger");
		
	}
	
	else
	{
		printf("c is larger");
	}
	
	
	  
	return 0;   
}
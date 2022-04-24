//second largest number amoung three number

#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter three numbers :\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a==b && b==c)
	{
		printf("All numbers are equal");
	}
	else if(a>=b && a>=c)
	{
		printf("%d is the largest\n",a);
		if(a!=b && a!=c  )
		{
		
		if(b>c)
		{
			printf("%d is the second largest\n",b);
		}
		else	
		{
			printf("%d is the second largest\n",c);
		}}
		else if(a==b)
		{
			printf("%d is the second largest\n",c);}
		
	
		else 
		{
			printf("%d is the second largest\n",b);}
			
	
	}
	else if(b>=c)
	{
		printf("%d is the largest\n",b);
		if(b!= c)
		{
		
		if(a>c)
		{
			printf("%d is the second largest\n",a);
		}
		else	
		{
			printf("%d is the second largest\n",c);
		}	}
		else{
			printf("%d is the second largest\n",a);
		}
	}
	
	
	else
	{
		printf("%d is the largest\n",c);
		if(a>=b)
		{
			printf("%d is the second largest\n",a);
		}
		else	
		{
			printf("%d is the second largest\n",b);
		}	
	
	}
	
	return 0;
	
}
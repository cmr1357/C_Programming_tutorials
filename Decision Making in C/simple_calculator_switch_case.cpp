#include<stdio.h>
int main()
{
	char operation;
	int n1,n2;
	float quotent;
	
	printf("Enter an operator(+,-,*,/)\n");
	scanf("%c",&operation);
	printf("%c\n",operation);
	printf("Enter two operands: \n");
	scanf("%d %d",&n1,&n2);
	
	switch(operation)
	{
		case'+':
			printf("sum = %d",n1+n2);
			break;
		case'-':
			printf("difference = %d",n1-n2);
			break;
		case'*':
			printf("product = %d",n1*n2);
			break;
		case'/':
			quotent= (float)n1/n2;
			printf("quotent = %f",(float)n1/n2);
			break;
		default:
			printf("Enter a valid operation\n");
			
	}
	
	return 0;
}
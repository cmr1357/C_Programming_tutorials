#include<stdio.h>
#include<string.h>
int main()
{
	char k;
	int i,j;
	printf("Enter the first number\n");
	scanf("%d",&i);
	printf("Enter the second number\n");
	scanf("%d",&j);
	printf("Enter the operation you want to perform +*/ \n");
	scanf("%c", &k);
	printf("%c",k);
	switch(k)
	{
	
	case '+':printf(" %d + %d = %d\n",i,j,(i+j));
			  break;
	case '*':printf(" %d * %d = %d\n",i,j,(i*j));
			 break;
	case '/':printf(" %d / %d = %d\n",i,j,(i/j));
			break;
	default:printf("Enter a valid operation\n");
			break;
		}
		return 0;
}
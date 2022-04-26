//MULTIPLICATION TABLE


#include<stdio.h>
int main()
{
	int range,n;
	printf("Enter the number : \n");
	scanf("%d",&n);
	printf("Enter the range : \n");
	scanf("%d",&range);
	
	for(int i =1;i<=range;i++)
	{
		printf("%d * %d = %d\n",n,i,(n*i));
	}
	return 0;
	
}
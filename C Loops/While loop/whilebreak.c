#include<stdio.h>
int main()
{
	
	int j=1;
	while(j<=10)
	{
			printf("%d",j);
		printf("Hi\n");
	
		if(j==5)
		{
			break;
		}
			j++;
	}
	 j=1;
	while(j<=10)
	{
			printf("%d",j);
		printf("Hi\n");
	
		if(j==5)
		{
			continue;
		}
			j++;
	}

	
	return 0;
}
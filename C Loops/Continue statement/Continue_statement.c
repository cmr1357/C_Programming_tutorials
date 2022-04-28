#include<stdio.h>
int main()
{
	
	int j=1,i=1;
	while(j<=10)
	{
			printf("%d",j);
		    printf("Hi\n");
	j++;
		if(j==5)
		{	
			printf("Hello\n");
			continue;
			printf("World\n");
		}
	}

	
	return 0;
}
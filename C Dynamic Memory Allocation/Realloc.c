#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, n;
//	printf("Enter the number of integers: \n");
//	scanf("%d",&n);
	int *ptr=(int *)malloc(2*sizeof(int));
	if(ptr==NULL)
	{
		printf("Memory is not available\n");
		exit(1);
	}
	for(i=0;i<2;i++)
	{
		printf("Enter an integer :");
		scanf("%d",ptr+i);
	}
	ptr=(int*)realloc(ptr,4*sizeof(int));
	if(ptr==NULL)
	{
		printf("Memory is not available\n");
		exit(1);
	}
	printf("Enter two more integers :");
	for(i=2;i<4;i++)
	{	
		scanf("%d",ptr+i);
	}
	for(i=0;i<(4);i++)
	{
		printf("%d\n",*(ptr+i));
	}
	free(ptr);
	ptr=NULL;
	return 0;
}
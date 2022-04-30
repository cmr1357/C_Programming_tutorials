#include<stdio.h>
#include<stdlib.h>
int *input()
{
	int *ptr,i;
	ptr=(int*)malloc(5*sizeof(int));
	printf("Enter five numbers\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",ptr+i);
	}
	return ptr;
}
int main()
{
	int sum=0,i;
	int *ptr=input();
	for(i=0;i<5;i++)
	{
		sum+=*(ptr+i);
	}
	printf("sum is :%d ",sum);
	free(ptr);
	ptr=NULL;
	return 0;
}
//Print Array reverse order
#include<stdio.h>
int main()
{
	int i;
	int arr[5];

	printf("Enter array elements\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	
	}
	printf("reverse of array \n");
	for(i=4;i>=0;i--)
	{
		printf("%d\t",arr[i]);
	}
	return 0;
}
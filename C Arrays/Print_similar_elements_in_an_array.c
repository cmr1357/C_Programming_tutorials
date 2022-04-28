//Total number of duplicate in an array
#include<stdio.h>

int main()
{
	int i,j=0,k=0;
	int smallest,count;
	int arr[5];
	int arr2[5];
	printf("Enter array elements\n");
	for(i=0;i<5;i++)
	{
		
		scanf("%d",&arr[i]);
		
	}
	for(i=0;i<5;i++)
	{
	if (arr[j]==arr[i])
	{	arr2[k]=arr[j];
	k++;j++;
	}
	
	}
	for(i=0;i<k;i++)
	{
		
		printf("%d",&arr2[i]);
		
	}
	
	return 0;
}
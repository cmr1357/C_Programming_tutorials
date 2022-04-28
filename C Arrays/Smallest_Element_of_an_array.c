//Largest elements in an array
#include<stdio.h>

int main()
{
	int i;
	int smallest;
	int arr[5];
	printf("Enter array elements\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
		
	}
	smallest=arr[0];
	for(i=0;i<5;i++)
	{
		if(arr[i]<smallest)
		{
			smallest=arr[i];
		}
	}
	printf("smallest element of an array is \n");
	
		printf("Smallest element = %d\n",smallest);
	
	return 0;
}
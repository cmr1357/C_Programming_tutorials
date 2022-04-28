//Largest elements in an array
#include<stdio.h>

int main()
{
	int i;
	int largest;
	int arr[5];
	printf("Enter array elements\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
		
	}
	largest=arr[0];
	for(i=0;i<5;i++)
	{
		if(arr[i]>largest)
		{
			largest=arr[i];
		}
	}
	printf("largest element of an array is \n");
	
		printf("largest = %d\n",largest);
	
	return 0;
}
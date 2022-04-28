//Selection sort

#include<stdio.h>

int main()
{
	int arr[5],i,j,temp,smallest;
	
	//Input array elements
	printf("Enter the elements of an array\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	//Printing the array
	printf("Array Before Sorting\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
	
	//Sorting array
	for(i=0;i<5;i++)
	{
		smallest=i;
		for(j=i+1;j<5;j++)
		{
			if(arr[smallest]>arr[j])
			{
				smallest=j;
			}
		}
		if(smallest != i)
		{
			temp=arr[i];
		arr[i]=arr[smallest];
		arr[smallest]=temp;
		}
	}
	
	//Printing array elements
	
	printf("Array after sorting\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",arr[i]);
	}
	
	return 0;
}

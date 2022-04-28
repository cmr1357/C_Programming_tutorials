//Insertion sort

#include<stdio.h>
#include<math.h>

int main()
{
	int arr[]={1,3,19,67,6,7,8};
	int size,i,j,key;
	size=sizeof(arr)/sizeof(arr[0]);
	
	//Print array before sorting
	printf("Array Before Sorting\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",arr[i]);
	}
	
	//Sorting of array
	for(i=1;i<size;i++)
	{
		key=arr[i];
		j=i-1;
		while(j>=0 && arr[j]>key)
		{
			arr[j+1]=arr[j];
			j=j-1;
		
		}
		arr[j+1]=key;
	}
	
	printf("\n");
	//Printing array after sorting
	printf("Array after sorting\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",arr[i]);
	}
	
	return 0;

}
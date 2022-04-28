//Sort elements in assending order
#include<stdio.h>
int main()
{
	int arr[5],i,j,temp;
	printf("Enter the elements of an array\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(arr[i]<arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
				
			}
		}
	}
	for(i=0;i<5;i++)
	{
		printf("%d\t",arr[i]);
	}
	return 0;
}

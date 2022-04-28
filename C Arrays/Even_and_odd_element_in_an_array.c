//Even and odd elements in an array
#include<stdio.h>

int main()
{
	int i,j=0,k=0;
	int odd,even;
	int arr[5];
	int odd_arr[5];
	int even_arr[5];
	printf("Enter array elements\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
		
	}
	
	for(i=0;i<5;i++)
	{
		if(arr[i]%2==0)
		{
			even_arr[j]=arr[i];
			j++;
		}
		else
		{
			odd_arr[k]=arr[i];
			k++;
		}
	}
	printf("Even array is \n");
	for(i=0;i<j;i++)
	{
	printf("%d\t",even_arr[i]);
		
	}
	printf("\n");
	printf("Odd array is \n");
	for(i=0;i<k;i++)
	{
	printf("%d\t",odd_arr[i]);
		
	}
		printf("\n");
		
	
	return 0;
}
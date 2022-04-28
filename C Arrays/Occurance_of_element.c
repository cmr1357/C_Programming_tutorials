//occurance of elements in assending order
#include<stdio.h>
int main()
{
	int arr[10]={1,2,9,4,9,4,7,8,9,99};
	int j,n,count=0;
	printf("Enter the elements you want to search\n");
	
		scanf("%d",&n);
		
	
	
		for(j=0;j<10;j++)
		{
			if(arr[j]==n)
			{
				count++;
				
			}
			
		}
		printf("The number you entered %d found %d times\n",n,count);

	return 0;
}

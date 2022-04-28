//Sort elements in assending order
#include<stdio.h>
int main()
{
	int arr[10]={1,2,3,8,5,6,7,8,9,99};
	int j,n,count=0,pos;
	printf("Enter the elements you want to search\n");
	
		scanf("%d",&n);
		
	printf("The position of number you entered\n");
	
		for(j=0;j<10;j++)
		{
			if(arr[j]==n)
			{
				printf("* %d\n",j);
				pos=j;
				count++;
				
			}
			
		}
		

	return 0;
}

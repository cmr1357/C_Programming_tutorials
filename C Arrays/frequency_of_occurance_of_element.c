//print unique element in an array
#include<stdio.h>
int main()
{	
	int arr[10]={1,2,3,3,4,5,2,1,9,2};
	int i,j,count=0,n=1;
	for(i=0;i<10;i++)
	{
		for(j=n;j<10;j++)
		{
			if(arr[i]==arr[j])
			{	
				arr[k]=arr[i];
				count++;
				printf("frequency of %d is %d\n",arr[i],count);
			}
		}
		n++;
		count=0;
	}
	
	return 0;
}
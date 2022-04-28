//ARRAY-AVERAGE

#include<stdio.h>
int main()
{
	int arr[10],sum=0;
	printf("Enter the array elements:\n");
	for(int i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
	}
	printf("Sum= %d\n",sum);
	printf("average=%d",(sum/10));
	
	return 0;
}

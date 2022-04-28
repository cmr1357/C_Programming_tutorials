//copy one dimensional array
#include<stdio.h>
int main()
{
	int i;
	int arr[5];
	int arr2[5];
	printf("Enter array elements\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
		arr2[i]=arr[i];
	}
	printf("Elements of destination array \n");
	for(i=0;i<5;i++)
	{
		printf("arr2[%d] = %d\n",i,arr2[i]);
	}
	return 0;
}
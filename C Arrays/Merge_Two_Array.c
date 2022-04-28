//Merge two arrays
#include<stdio.h>
int main()
{
	int arr1[5]={22,3,4,56,6},arr2[5]={78,56,3,2,5},i,j,arr3[10];
	for(i=0;i<5;i++)
	{
		arr3[i]=arr1[i];
	}
	for(j=0;j<5;j++)
	{
		arr3[i]=arr2[j];
		i++;
	}
	for(j=0;j<10;j++)
	{
		printf("%d \t",arr3[j]);
	}
	
	return 0;
}
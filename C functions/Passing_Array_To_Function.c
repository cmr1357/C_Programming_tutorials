//Passing array to a function Wrong method3
#include<stdio.h>
void funarr(int arr[],int n);
int main()
{	
	int arr[]={1,2,3,4,5,6};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	printf("Array size inside main is %d \n",n);
	funarr(arr,n);
	return 0;	
}
funarr(int arr[],int n)
{
	int k=sizeof(arr)/sizeof(arr[0]);
	
	printf("Array size inside function is %d \n",n);
	return;
}
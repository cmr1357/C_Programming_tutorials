//Copy array elements using pointers
#include<stdio.h>
#define max 100
int main()
{
	int arr[max],size,arr1[max],j,*p,*k,i;
	printf("Enetr the size of an array\n");
	scanf("%d",&size);
	printf("Enter the array elements\n");
	p=arr;
	k=arr1;
	for(i=0;i<size;i++)
	{
		scanf("%d",(p+i));
		
	}
	p=arr;
	
		for(i=0;i<size;i++)
	{
		
		*k=*p;
		p++;
		k++;
	}
	k=arr1;
	for(i=0;i<size;i++)
	{
		printf("%d\t",*(k+i));
	}
	return 0;
}
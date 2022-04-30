//swap two array using pointers

#include<stdio.h>
#define max 100
int main()
{
	int arr[max],n,s,arr1[max],j,*p,*k,i,temp;
	printf("Enetr the size of first array\n");
	scanf("%d",&n);
	printf("Enter the size of second array\n");
	p=arr;
	scanf("%d",&s);
	k=arr1;
	printf("Enter the first array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",(p+i));
		
	}
	printf("Enter the second array elements\n");
	for(i=0;i<s;i++)
	{
		scanf("%d",(k+i));
		
	}
	p=arr;
	k=arr1;
	for(i=0;i<n ||i<s;i++)
	{
		temp=*p;
		*p=*k;
		*k=temp;
		p++;
		k++;
	}
	p=arr;
	k=arr1;
	printf("first array \n");
	for(i=0;i<s;i++)
	{
		printf("%d\t",*(p+i));
	}
	printf("\nSecond array \n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",*(k+i));
	}
	return 0;
}
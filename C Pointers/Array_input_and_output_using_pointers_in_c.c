//input and print array elements using pointers
//Note (ptr +i),&ptr[i],*(ptr+i),ptr[i],(i+ptr),i[ptr] is all the same
#include<stdio.h>
#define max 100
int main()
{
	int arr[max],size,*p,i;
	p=&arr[0];
	printf("Enter the size of array\n");
	scanf("%d",&size);
	printf("Enter the elements of an array\n");
	for(i=0;i<size;i++)
	{
	scanf("%d",p);
	//	scanf("%d",(p+i));
		p++;
	}
	printf("The array is \n");
	p=&arr[0];
	for(i=0;i<size;i++)
	{
		printf("%d\n",*p);
	//	printf("%d\n",*(p+i));
		p++;
	}
	return 0;
}
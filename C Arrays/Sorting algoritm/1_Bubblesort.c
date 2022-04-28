//Bubble Sort

#include<stdio.h>
int main()
{
	int a[10]={1,4,5,6,8,12,1,45,67,3};
	int i,j,k,temp;
	int swap=1;
	
	//Printing array before sorting
	printf(" Array Before sorting\n");
	for(i=0;i<10;i++)
	{
			printf("%d\t",a[i]);
	}
	printf("\n");
	
	//Sorting array
	while(swap!=0)
	{
		swap=0;
		//for(k=0;k<10;k++)
		//{
			for(i=0,j=i+1;j<10;i++,j++)
			{
				if(a[j]<a[i])
				{
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
					swap++;
				}
			}
		//}
		
	}
	
	printf("\n");
	printf(" Array After sorting\n");
	//Printing array after sorting
	for(i=0;i<10;i++)
	{
			printf("%d\t",a[i]);
	}
	printf("\n");
	
	return 0;
}
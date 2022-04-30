//Method-1
//Passing array to a function method3
#include<stdio.h>
void funarr(char arr[]);
int main()
{	
	char arr[]="hello world";
	int n=sizeof(arr)/sizeof(arr[0]);
	
	printf("Array size inside main is %d \n",n);
	funarr(arr);
	return 0;	
}
funarr(char arr[])
{
	int k=sizeof(arr)/sizeof(arr[0]);
	
	printf("Array size inside function is %d \n",k);
	printf("The array is\n");
	
	int i=0;
	while(arr[i]!='\0')
	{
		printf("%c",arr[i]);
		i++;
	}
	
	return;
}
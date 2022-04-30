#include<stdio.h>
int main()
{
	char arr[6]={'h','e','l','l','o','\0'};
	int i;
	for(i=0;arr[i]!='\0';i++)
	{
		printf("%c",arr[i]);
	}
	printf("\n");
	char arr1[]="hello";
	for(i=0;arr1[i]!='\0';i++)
	{
		printf("%c",arr[i]);
	}
	return 0;
}
#include<stdio.h>
int main()
{
	char a[12]="Hello World";
	int length=0,i=0;
	while(a[i]!='\0')
	{
		length++;
		i++;
	}
	printf("The length of the string = %d \n",length);
	return 0;
}
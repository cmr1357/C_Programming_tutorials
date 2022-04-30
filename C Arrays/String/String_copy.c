//String copy

#include<stdio.h>
int main()
{
	int i;
	char a[12]="Hello World";
	char b[13];
	for(i=0;a[i] !='\0';i++)
	{
		b[i]=a[i];
	}
	b[i]='\0';
	printf("%s",b);
	return 0;
}
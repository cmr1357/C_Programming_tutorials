#include<stdio.h>
#include<string.h>
int main()
{
	char ch;
	char str[100];
	int i,count=0;
	
	printf("Enter the string\n");
	gets(str);
	printf("Enter a character\n");
	scanf("%c",&ch);
	
	
	for(i=0;str[i] !='\0';i++)
	{
		if(ch==str[i])
		{
			count++;
		}
	}
	printf("frequency of %c =%d ",ch,count);
	return 0;
}
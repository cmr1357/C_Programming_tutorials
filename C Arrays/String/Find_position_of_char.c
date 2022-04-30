#include<stdio.h>
int main()
{
	int i;
	char ch;
	char str[100];
	printf("Enter the string");
	gets(str);
	printf("Enter the letter\n");
	scanf("%c",&ch);
	printf("The letter find at positions\n");
	for(i=0;str[i] != '\0';i++)
	{
		
		if(str[i]==ch)
		{
			printf("%d\n",i);
		}
	}
	return 0;
}
//Reversed string is
#include<stdio.h>
# define max 100
int main()
{
	 char str[max];
	 char strrev[max];
	 int length,j=0;
	 printf("Enter the first string\n");
	 gets(str);
	 
	 while (str[length]!='\0')
	 {
	 	length++;
	 }
	 length=length-1;
	 while(length >=0)
	 {
	 	strrev[j]=str[length];
	 	length--;
	 	j++;
	 }
	 strrev[j]='\0';
	 
	 printf("original string is\n");
	 puts(str);
	 printf("reversed string is\n");
	 puts(strrev);
	
	return 0;
}
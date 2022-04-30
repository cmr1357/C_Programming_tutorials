//concatenew string
#include<stdio.h>
# define max 100
int main()
{
	 char str1[max];
	 char str2[max];
	 int i=0,j=0;
	 printf("Enter the first string\n");
	 gets(str1);
	 printf("Enter the second string\n");
	 gets(str2);
	 while (str1[i]!='\0')
	 {
	 	i++;
	 }
	 while(str2[j]!='\0')
	 {
	 	str1[i]=str2[j];
	 	i++;
	 	j++;
	 }
	 str1[i]='\0';
	 
	 printf("Concatenated string is\n");
	 puts(str1);
	
	return 0;
}
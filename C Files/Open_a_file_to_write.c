//C program to open a file write in it. And close the file
#include<stdio.h>
#include<string.h>
int main()
{
	FILE *fp;
	char data[50]="Nothing in life is free";
	fp=fopen("C:\\Users\\Chithra\\Desktop\\hi.txt","w");
	if(fp==NULL)
	{
		printf("Hello\n");
	}
	else
	{
		printf("The file is now opened\n");
	if(strlen(data)>0)
	{
		fputs(data,fp);
		fputs("\n",fp);
	}
	fclose(fp);
	printf("Data successfully writern in file\n");
	printf("The file is now closed");
}
return 0;
	
	
}
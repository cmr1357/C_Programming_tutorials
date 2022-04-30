//C program to open a file read from it . And close the file
#include<stdio.h>
#include<string.h>
int main()
{
	FILE *fp;
	char data[50];
	fp=fopen("C:\\Users\\Chithra\\Desktop\\hi.txt","r");
	if(fp==NULL)
	{
		printf("failed to open");
	}
	else
	{
		printf("The file is opened\n");
		while(fgets(data,50,fp)!=NULL)
		{
			printf("%s",data);
		}
		fclose(fp);
		printf("Data sucessfully read from file\n");
		printf("The file is now close\n");
	}
	return 0;
}
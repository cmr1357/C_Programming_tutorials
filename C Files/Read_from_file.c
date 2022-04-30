#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char buff[255];//creating charater array to store data of file.
	fp=fopen("C:\\Users\\Chithra\\Desktop\\hi.txt","r");
	while(fscanf(fp,"%s",buff)!=EOF)
	{
		printf("%s ",buff);
	}
	fclose(fp);
}
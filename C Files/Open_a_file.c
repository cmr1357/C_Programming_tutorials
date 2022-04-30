//Open a file
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
int main()
{
	int num;
	FILE *fptr;
	fptr=fopen("C:\\Users\\Chithra\\Desktop\\chithra.txt","r");
	if(fptr==NULL)
	{
		printf("Error\n");
		exit(1);
	}
	//fclose(fptr);
	fscanf(fptr,"%d",&num);
	printf("Value of n=%d",num);
	fclose(fptr);
	return 0;
}
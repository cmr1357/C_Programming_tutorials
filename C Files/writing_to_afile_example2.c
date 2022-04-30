#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int c;
	//FILE *fptr;
FILE *fp =fopen("C:\\Users\\Chithra\\Desktop\\hi.txt","w");

	c=fgetc(fp);
	if(feof(fp))
	{
		break;
	}

printf("%c",c);

fclose(fp);
return 0;


}
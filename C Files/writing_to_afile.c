#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int num;
	//FILE *fptr;
FILE *fptr =fopen("C:\\Users\\Chithra\\Desktop\\hi.txt","w");
fprintf(fptr,"%s %s %s %d","we","are","in",2021);
	return 0;
}
#include<stdio.h>

int main()
{
	int value=10;// here value is a variable and it hold integer type of data
	
	// The sizeof() helps us to find howmuch memory each data types occupies in the memory.
	
	printf("size of integer=%d\n",sizeof(int));
	printf("size of float=%d\n",sizeof(float));
	printf("size of character=%d\n",sizeof(char));
	printf("size of double=%d\n",sizeof(double));
	printf("size of long int=%d\n",sizeof(long int));
	printf("size of short int=%d\n",sizeof(short int));
	printf("size of unsigned int=%d\n",sizeof(unsigned int));
	
	
	return 0;
}
#include<stdio.h>
	union abc
	{
		int a;
		char b;
		double c;
		float d;
	}var;
int main()
{
//try type of all datatype and print the size of all data type.
printf("%ld\n", sizeof(union abc));

	return 0;
}
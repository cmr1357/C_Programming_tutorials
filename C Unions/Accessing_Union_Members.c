#include<stdio.h>
#include<string.h>
union data
{
	int i;
	float f;
	char str[20];
};
int main()
{
	union data Data;
	Data.i=10;
	Data.f=10.3;
	strcpy(Data.str,"C Programming");
	
	printf("Data.i : %d\n",Data.i);
	printf("Data.f : %f\n",Data.f);
	printf("Data.str: %s\n",Data.str);
	
	
}
/*Here, we can see that values of i and f members of union got corrupted because final value
assigned to the variable has occupied the memory location and this is the reason that the
value if str member is getting printed very well. Now let's look into the same example once
again where we will use one variable at a time which is the main purpose of having union:*/
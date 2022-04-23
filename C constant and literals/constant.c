#include<stdio.h>
int main()
{
	const float PI=3.14;// PI is a constant variable and its value is fixed all the time.
	
	printf("PI=%f\n",PI);
	
	// After executing the code ones try to remove the below coment and run the code
	
//	PI=1.25//compiler shows error because constant cannot be changed.
	
	return 0;
}
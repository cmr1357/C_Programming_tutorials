//typedef in structures
#include<stdio.h>
int main()
{
	struct student
	{
		char name[20];
		int age;
	};
	typedef struct student k;
	
k s1= {"araty",30};
//	s2={"arun",40};
	printf("name=%s\n",s1.name);
	printf("age=%d",s1.age);
	return 0;
	}

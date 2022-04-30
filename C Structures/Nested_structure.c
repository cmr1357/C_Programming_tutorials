//Nested structure

#include<stdio.h>

struct student{
	char name[30];
	int rollno;
	
	struct dateofbirth
	{
		int date;
		int month;
		int year;
	}dob;
};

int main()
{
	struct student std;
	printf("Enter name: "); 		gets(std.name);
	printf("Enter roll number: ");	scanf("%d",&std.rollno);
	printf("Enter Date of Birth [DD MM YY] format: ");
	scanf("%d%d%d",&std.dob.date,&std.dob.month,&std.dob.year);
	printf("\nName : %s \nRollNo : %d \nDate of birth : %02d/%02d/%02d\n",std.name,std.rollno,std.dob.date,std.dob.month,std.dob.year);
	
	return 0;

}
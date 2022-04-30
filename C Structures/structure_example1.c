//Defining a structure

# include<stdio.h>
int main()
{
	struct employee
	{
		
		char *dept ="Production";//this show error
		char *pos ="supervisor";
		int year;
		int salary;
		
	};//adam;
	
	struct employee adam;
	//adam.dept="Production";
	//adam.pos="supervisor";
	adam.year=2015;
	adam.salary=2000;
	
	//print adam info
	Printf("ADAM\n");
	
	printf("Dept : %s\n",adam.dept);
	printf("pos : %s\n",adam.pos);
	printf("year : %d\n",adam.year);
	printf("salary : %d\n",adam.salary);
	
		
	return 0;
}
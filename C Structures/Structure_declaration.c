//C program to read and print an employee's detail using structure
#include <stdio.h>
 
/*structure declaration*/
struct employee{
    char    name[30];
    int     empId;
    float   salary;
};
 
int main()
{
    /*declare structure variable*/
    struct employee emp;
     
    /*read employee details*/
    printf("\nEnter details :\n");
    printf("Name :");          gets(emp.name);
    printf("ID :");            scanf("%d",&emp.empId);
    printf("Salary :");        scanf("%f",&emp.salary);
     
    /*print employee details*/
    printf("\nEntered detail is:");
    printf("Name: %s\n"   ,emp.name);
    printf("Id: %d\n"     ,emp.empId);
    printf("Salary: %f\n",emp.salary);
    return 0;
}

#include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    char name[30];
    union {
        float salary;
        struct {              
            int hoursWorked;
            int overtimeHours; 
        };   
    }; 
};
struct Employee emp;
struct Employee emp2;
struct Employee emp3;

int main() {

    //For the employee no 1
    emp.id = 81;
    strcpy(emp.name, "Muhammad Tahir Hussain");
    printf("The id of the employee 1 is: %d\n", emp.id);
    printf("The name of the employee 1 is: %s\n", emp.name);

    emp.salary = 100000.00;
    printf("The salary of the employee 1 is: %.2f\n", emp.salary);
    
    puts("");
    // printf("The size of the struct is: %dbytes\n\n", sizeof(emp));

    emp.hoursWorked = 50;
    emp.overtimeHours = 125;
    printf("The house worked hours of employee 1 are: %d\n", emp.hoursWorked);
    printf("The overtime hours of the employee 1 are: %d\n", emp.overtimeHours);
    printf("The salary of the employee 1 after the extra hours is: %.2f\n", emp.salary);
    
    //For the employee no 2
    emp2.id = 86;
    strcpy(emp2.name, "Muhammad Anas Alam");
    printf("The id of the employee 2 is: %d\n", emp2.id);
    printf("The name of the employee 2 is: %s\n", emp2.name);

    emp2.salary = 500000.00;
    printf("The salary of the eployee is: %.2f\n", emp2.salary);
    
    puts("");
    // printf("The size of the struct is: %dbytes\n\n", sizeof(emp2));

    emp.hoursWorked = 90;
    emp.overtimeHours = 175;
    printf("The house worked hours of the employee 2 are: %d\n", emp2.hoursWorked);
    printf("The overtime hours of the employee 2 are: %d\n", emp2.overtimeHours);
    printf("The salary of the employee 2 after the extra hours is: %.2f\n", emp2.salary);
   
    //For the employee no 3
    emp3.id = 97;
    strcpy(emp3.name, "Muhammad Amir Hamza");
    printf("The id of the employee 2 is: %d\n", emp3.id);
    printf("The name of the employee 2 is: %s\n", emp3.name);

    emp3.salary = 800000.00;
    printf("The salary of the eployee is: %.2f\n", emp3.salary);
    
    puts("");
    // printf("The size of the struct is: %dbytes\n\n", sizeof(emp3));

    emp3.hoursWorked = 60;
    emp3.overtimeHours = 105;
    printf("The house worked hours of the employee 2 are: %d\n", emp3.hoursWorked);
    printf("The overtime hours of the employee 2 are: %d\n", emp3.overtimeHours);
    printf("The salary of the employee 2 after the extra hours is: %.2f\n", emp3.salary);

    return 0;
}

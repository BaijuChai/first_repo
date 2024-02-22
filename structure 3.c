#include <stdio.h>
#include <string.h>

// Define the structure Employee
struct Employee {
    int employeeID;
    char name[100];
    float salary;
};

int main() {
    // Declare variables
    struct Employee employees[3];
    struct Employee highestSalaryEmployee;

    // Input details for three employees
    for (int i = 0; i < 3; i++) {
        printf("Enter details of employee %d:\n", i + 1);
        printf("Employee ID: ");
        scanf("%d", &employees[i].employeeID);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
    }

    // Initialize highestSalaryEmployee with the first employee
    highestSalaryEmployee = employees[0];

    // Find the employee with the highest salary
    for (int i = 1; i < 3; i++) {
        if (employees[i].salary > highestSalaryEmployee.salary) {
            highestSalaryEmployee = employees[i];
        }
    }

    // Display information of the employee with the highest salary
    printf("\nEmployee with Highest Salary:\n");
    printf("Employee ID: %d\n", highestSalaryEmployee.employeeID);
    printf("Name: %s\n", highestSalaryEmployee.name);
    printf("Salary: %.2f\n", highestSalaryEmployee.salary);

    return 0;
}

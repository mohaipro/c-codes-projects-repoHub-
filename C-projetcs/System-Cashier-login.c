#include <stdio.h>

// Define a structure to store employee information
struct Employee {
    int id;           // Employee ID
    float salary;     // Employee salary
    char name[10];    // Employee name (up to 9 characters + null terminator)
};

int main() {
    printf("Hello and Welcome to System Login\n");

    int x; // Number of employees
    printf("Enter number of Employees in The Corp? ");
    scanf("%d", &x);
    printf("Number of Employee >> %d <<\n", x);

    // Create an array of Employee structs with size x
    struct Employee emp_array[x];

    // Input details for each employee
    for (int i = 0; i < x; i++) {
        printf("%d. Employee Name >> ", i + 1);
        scanf("%s", emp_array[i].name); // Read employee name
        printf("%d. Employee Id >> ", i + 1);
        scanf("%d", &(emp_array[i].id)); // Read employee ID
        printf("%d. Employee Salary >> ", i + 1);
        scanf("%f", &(emp_array[i].salary)); // Read employee salary
    }

    char c; // User choice to display employee data
    printf("Do you want to see system (Y) or (N)? ");
    scanf(" %c", &c);

    // If user wants to see the employee system, display all employee data
    if (c == 'Y') {
        for (int j = 0; j < x; j++) {
            printf("Name: %s, Id: %d, Salary: %.2f\n", 
                emp_array[j].name, emp_array[j].id, emp_array[j].salary);
        }
    } else {
        printf("Thanks anyWays\n");
    }
    printf("Thanks for using our system!\n");
    return 0;
}

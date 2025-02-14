#include <stdio.h>
#include "Struct_Workspace.h"

void InputCarInformation(struct Car *car)
{
    printf("Car ID: ");
    scanf("%d", &car->carID);
    printf("Model: ");
    scanf("%s", &car->model);
    printf("Rental Rate: ");
    scanf("%f", &(*car).rental_rate);
}

float CalculateRentalRate(struct Car car, float rental_rate)
{
    printf("\n---Value = %f---\n", car.rental_rate);
    return car.rental_rate * rental_rate;
}

void InputEmployeeInformation(struct Employee *employee)
{
    printf("Employee ID: ");
    scanf("%d", &employee->empID);
    printf("Name: ");
    scanf("%s", &employee->name);
    printf("Salary: ");
    scanf("%f", &employee->salary);
}

void DisplayEmployeeInformation(struct Employee employee)
{
    printf("Employee with hightest information:\n");
    printf("\nEmployee ID: %d", employee.empID);
    printf("\nName: %s", employee.name);
    printf("\nSalary: %f", employee.salary);
}

void HighestSalaryEmployee(struct Employee employee1, struct Employee employee2, struct Employee employee3)
{
    if (employee1.salary > employee2.salary && employee1.salary > employee3.salary)
    {
        DisplayEmployeeInformation(employee1);
    }
    else if (employee2.salary > employee3.salary)
    {
        DisplayEmployeeInformation(employee2);
    }
    else
    {
        DisplayEmployeeInformation(employee3);
    }
}



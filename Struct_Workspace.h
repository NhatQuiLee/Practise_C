#ifndef STRUCT_HEADER
#define STRUCT_HEADER

struct Car
{
    int carID;
    char model[100];
    float rental_rate;
};

struct Employee
{
    int empID;
    char name[100];
    float salary;
};

void InputEmployeeInformation(struct Employee *employee);

void DisplayEmployeeInformation(struct Employee employee);

void HighestSalaryEmployee(struct Employee employee1, struct Employee employee2, struct Employee employee3);

void InputCarInformation(struct Car *car);

float CalculateRentalRate(struct Car car, float rental_rate);

#endif
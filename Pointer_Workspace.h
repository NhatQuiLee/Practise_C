#ifndef POINTER_HEADER
#define POINTER_HEADER

int AddTwoNumber(int *number_1, int *number_2);

void FindMaximumNumber(int *num1, int *num2);

void SwapTwoNumber(int *num1, int *num2);

void SwapTwoNumberWithoutPointer(int num1, int num2);

void EnterArrayPointer(int *array, int number);

void DisplayArrayPointer(int *array, int number);

int CalculateLengthOfString(char *str);

int FindFactorial(int number, int *result);

void CountNumberOfVowelAndConsonant(char *str);

struct EmployeeInfor
{
    char name[50];
    char street[50];
    int pincode;
};

void EnterEmployeeInfor(struct EmployeeInfor *employee);

void DisplayEmployeeInfor(struct EmployeeInfor *ptr);

#endif
#include <stdio.h>
#include "Pointer_Workspace.h"

int AddTwoNumber(int *number_1, int *number_2)
{
    int result;
    result = *number_1 + *number_2;
    return result;
}

void FindMaximumNumber(int *num1, int *num2)
{
    if (*num1 > *num2)
    {
        printf("Maximum number is %d", *num1);
    }
    else
    {
        printf("Maximum number is %d", *num2);
    }
}

void SwapTwoNumber(int *num1, int *num2)
{
    int swap;
    swap = *num1;
    *num1 = *num2;
    *num2 = swap;
}

void SwapTwoNumberWithoutPointer(int num1, int num2)
{
    int swap;
    swap = num1;
    num1 = num2;
    num2 = swap;
}

void EnterArrayPointer(int *array, int number)
{
    for (int i = 0; i < number; i++)
    {
        printf("Array[%d] = ", i);
        scanf("%d", array + i);
    }
}

void DisplayArrayPointer(int *array, int number)
{
    printf("\nArray = [");
    for (int i = 0; i < number; i++)
    {
        printf("%d ", *(array + i));
    }
    printf("]");
}

int CalculateLengthOfString(char *str)
{
    int i = 0;
    while (*(str + i) != '\0')
    {
        i++;
    }
    return i;
}

int FindFactorial(int number, int *result)
{
    *result = 1;
    for (int i = 1; i <= number; i++)
    {
        *result = *result * i;
    }
    return *result;
}

void CountNumberOfVowelAndConsonant(char *str)
{
    int vowel = 0;
    int consonant = 0;
    printf("String: %s", str);
    while(*str != '\0')
    {
        if ((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z'))
        {
            if (*str == 'A' || *str == 'O' || *str == 'E' || *str == 'U' || *str == 'I' ||
                *str == 'a' || *str == 'o' || *str == 'e' || *str == 'u' || *str == 'i')
                {
                    printf("%c", *str);
                    vowel++;
                }
            else
            {
                printf("%c", *str);
                consonant++;
            }
        }
        str++;
    }
    printf("\nNumber of vowels in string: %d", vowel);
    printf("\nNumber of consonants in string: %d", consonant);
}


void EnterEmployeeInfor(struct EmployeeInfor *employee)
{
    printf("Name: ");
    fgets(employee->name, sizeof(employee->name), stdin);
    getchar();
    printf("Street: ");
    fgets(employee->street, sizeof(employee->street), stdin);
    getchar();
    printf("Pincode: ");
    scanf("%d", &employee->pincode);
    getchar();
}

void DisplayEmployeeInfor(struct EmployeeInfor *ptr)
{
    printf("Hello %s from %s\n", ptr->name, ptr->street);
}
#include <stdio.h>
#include "Recursion_Workspace.h"

void DisplayNumberRecursion(int number)
{
    if (number <= 50)
    {
        printf("%d ", number);
        DisplayNumberRecursion(number - 1);
    }  
}

int CalculatateRangeOfNumber(int number)
{
    int result;
    if (number == 1)
    {
        return 1;
    }
    else
    {
        result  = number + CalculatateRangeOfNumber(number - 1);
    }
    return result;
}

void FibonacciRecursion(int number, int fibo_1, int fibo_2)
{
    if (number > 0)
    {
        int fibo_n;
        fibo_n = fibo_1 + fibo_2;
        printf("%d ", fibo_n);
        FibonacciRecursion(number - 1, fibo_2, fibo_n);
    }
}

void DisplayArrayRecursion(int array[], int number, int start)
{
    if (start < number)
    {
        printf("%d ", array[start]);
        DisplayArrayRecursion(array, number, start + 1);
    }
}

int SumOfDigits(int number)
{
    if (number == 0)
    {
        return 0;
    }
    return ((number % 10) + SumOfDigits(number/10));
}

int FindGCDRecursion(int number_a, int number_b)
{
    while(number_a != number_b)
    {
        if (number_a > number_b)
        {
            return FindGCDRecursion(number_a-number_b, number_b);
        }
        else
        {
            return FindGCDRecursion(number_a, number_b-number_a);
        }   
    }
    return number_a;
}

int LargestNumberArrayRecursion(int array[], int number, int start)
{
    int largest;
    if (start < number)
    {
        if(array[start] > largest)
        {
            largest = array[start];
        } 
        LargestNumberArrayRecursion(array, number, start + 1);
    }
    return largest;
}
#include <stdio.h>
#include <stdbool.h>
#include "ForLoop_Workspace.h"

bool IsPrime(int number)
{
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }
    return true;
}

void DisplayPrimeInRange(int start, int end)
{
    for (int i = start; i <= end; i++)
    {
        if (IsPrime(i) && i >= 2)
        {
            printf("%d ", i);
        }
    }
}

int Fibonacci(int number)
{
    int fibo_1 = 0;
    int fibo_2 = 1;
    int fibo_n;

    if (number == 1)
    {
        return fibo_1;
    }
    else if (number == 2)
    {
        return fibo_2;
    }
    else if (number > 2)
    {
        for (int i = 3; i <= number; i++)
        {
            fibo_n = fibo_1 + fibo_2;
            fibo_1 = fibo_2;
            fibo_2 = fibo_n;
        }
        return fibo_n;
    }
        
}
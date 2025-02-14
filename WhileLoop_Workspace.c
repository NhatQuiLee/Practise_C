#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "WhileLoop_Workspace.h"

void GuessNumber(int start, int end)
{
    int number;
    int random_number = (rand() % (end - start + 1)) + start;
    printf("*** Random number = %d ***\n", random_number);
    while(1)
    {
        printf("Guess number: ");
        scanf("%d", &number);
        if (number == random_number)
        {
            printf("You are right!");
            break;
        }
        else
        {
            printf("Guess again!\n");
        }
    }
}

void EnterNumberWithoutDuplicate()
{
    int stored_number[100];
    int index_array = 0;
    int number;
    while (1)
    {
        printf("Input a number: ");
        scanf("%d", &number);
        stored_number[index_array] = number;
        index_array++;
        int len = sizeof(stored_number) / sizeof(stored_number[0]);
        int counter = 0;
        for (int i = 0; i < len; i++)
        {
            if (number == stored_number[i])
            {
                counter++;
            }
        }
        if (counter == 2)
        {
            break;
        }
    }
}

void ValidName()
{
    char name[50];
    while(1)
    {
        printf("Input a name: ");
        scanf("%s", &name);
        if (strlen(name) >= 8)
        {
            printf("Your private name is: %s", name);
            break;
        }
        else
        {
            printf("Invalid name!\nTry again!\n");
        }
    }
}

bool IsPalindrome(int number)
{
    int orginal_number = number;
    int reverse_number = 0;
    while(number > 0)
    {
        reverse_number = reverse_number*10 + (number % 10);
        number = number / 10;
    }
    if (orginal_number == reverse_number)
    {
        return true;
    }
    return false;
}
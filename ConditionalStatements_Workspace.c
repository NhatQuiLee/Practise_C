#include <stdio.h>
#include <stdbool.h>
#include "ConditionalStatements_Workspace.h"

bool IsLeapYear(int number)
{
    if ((number % 4 == 0 && number % 100 != 0) ||
        number % 4 == 0 && number % 100 == 0 && number % 400 != 0)
        return true;
    else
    {
        return false;
    }
}
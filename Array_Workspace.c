#include <stdio.h>
#include "Array_Workspace.h"

int EnterNumber()
{
    int number;
    printf("Enter number: ");
    scanf("%d", &number);
    return number;
}

int EnterNumberOfRow()
{
    int row;
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    return row;
}

int EnterNumberOfColumn()
{
    int column;
    printf("Enter the number of columns: ");
    scanf("%d", &column);
    return column;
}

void EnterArray(int array[], int number)
{
    for (int i = 0; i < number; i++)
    {
        printf("Array[%d] = ", i);
        scanf("%d", &array[i]);
    }
}

void DisplayArray(int array[], int number)
{
    printf("\nArray = [");
    for (int i = 0; i < number; i++)
    {
        printf("%d ", array[i]);
    }
    printf("]");
}

int CountDubbleElements(int array[], int number)
{
    int counter = 0;
    for (int i = 0; i < number; i++)
    {
        int double_check = 0;
        for (int j = 0; j < number ; j++)
        {
            if (array[i] == array[j])
            {
                double_check++;
            }
        }
        if (double_check == 2)
        {
            counter++;
        }
    }
    return counter/2;
}

void EnterArray_And_FrequencyArray(int array[], int frequencyArray[], int number)
{
    for (int i = 0; i < number; i++)
    {
        printf("Array[%d] = ", i);
        scanf("%d", &array[i]);
        frequencyArray[i] = -1;
    }
}

void FrequencyOfEachElementsInArray(int array[], int frequencyArray[], int number)
{   
    for (int i = 0; i < number; i++)
    {
        int counter = 1;
        for (int j = i+1; j< number; j++)
        {
            if (array[i] == array[j])
            {
                counter++;
                frequencyArray[j] = 0;
            }
        }
        if (frequencyArray[i] != 0)
        {
            frequencyArray[i] = counter;
        }
        
    }
    for (int i = 0; i<number ; i++)
    {
        if(frequencyArray[i] != 0)
        {
            printf("Frequency of %d is: %d\n", array[i], frequencyArray[i]);
        }
    }
}

void InsertValueIntoArray(int array[], int number, int value, int position)
{
    int stored_value, swap_value;
    stored_value = value;
    for (int i = position; i <= number ; i++)
    {
        swap_value = array[i];
        array[i] = stored_value;
        stored_value = swap_value;
    }
    printf("\n");
    DisplayArray(array, number + 1);
}

void DeleteValueInArray(int array[], int number, int position)
{
    for (int i = position - 1; i < number; i++)
    {
        array[i] = array[i+1];
    }
    printf("\n");
    DisplayArray(array, number - 1);
}

void SortDescendingArray(int array[], int number)
{
    for (int i = 0; i < number ; i++)
    {
        for (int j = i + 1; j < number ; j++)
        {
            if (array[i] < array[j])
            {
                int swap = array[i];
                array[i] = array[j];
                array[j] = swap;
            }
        }
    }
    printf("\n");
    DisplayArray(array, number);
    printf("\n");
}

void SortAscendingArray(int array[], int number)
{
    for (int i = 0; i < number ; i++)
    {
        for (int j = i + 1; j < number ; j++)
        {
            if (array[i] > array[j])
            {
                int swap = array[i];
                array[i] = array[j];
                array[j] = swap;
            }
        }
    }
    printf("\n");
    DisplayArray(array, number);
    printf("\n");
}

int FindSecondLargestNumberInArray(int array[], int number)
{
    int secondLargestNumber;
    SortDescendingArray(array, number);
    for (int i = 1; i < number ; i++)
    {
        if (array[i] != array[0])
        {
            secondLargestNumber = array[i];
            break;
        }
    }
    return secondLargestNumber;
}

int FindThirdLargestNumberInArray(int array[], int number)
{
    SortDescendingArray(array, number);
    int thirdLargestNumber;
    int findThirdLargestNumber = array[0];
    int count = 1;
    for (int i = 1; i < number ; i++)
    {
        if (array[i] != findThirdLargestNumber)
        {
            count++;
            findThirdLargestNumber = array[i];
            if (count == 3)
            {
                thirdLargestNumber = findThirdLargestNumber;
                break;
            }
        }
    }
    return thirdLargestNumber;
}

void Enter2DArray(int array[100][100], int row, int column)
{
    for (int i = 0; i < row ; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("Array[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
}

void Display2DArray(int array[100][100], int row, int column)
{
    for (int i = 0; i < row ; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}

void SumTwo2DArray(int array1[100][100], int array2[100][100], int row, int column)
{
    int array_new[100][100];
    for (int i = 0; i < row ; i++)
    {
        for (int j = 0; j < column; j++)
        {
            array_new[i][j] = array1[i][j] + array2[i][j]; 
        }
    }
    Display2DArray(array_new, row, column);
}
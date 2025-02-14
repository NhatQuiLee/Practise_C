#ifndef ARRAY_HEADER
#define ARRAY_HEADER

int EnterNumber();

int EnterNumberOfRow();

int EnterNumberOfColumn();

int CountDubbleElements(int array[], int number);

void EnterArray(int array[], int number);

void DisplayArray(int array[], int number);

void EnterArray_And_FrequencyArray(int array[], int frequencyArray[], int number);

void FrequencyOfEachElementsInArray(int array[], int frequencyArray[], int number);

void InsertValueIntoArray(int array[], int number, int value, int position);

void DeleteValueInArray(int array[], int number, int position);

void SortAscendingArray(int array[], int number);

void SortDescendingArray(int array[], int number);

int FindSecondLargestNumberInArray(int array[], int number);

int FindThirdLargestNumberInArray(int array[], int number);

void Enter2DArray(int array[100][100], int row, int column);

void Display2DArray(int array[100][100], int row, int column);

void SumTwo2DArray(int array1[100][100], int array2[100][100], int row, int column);

#endif
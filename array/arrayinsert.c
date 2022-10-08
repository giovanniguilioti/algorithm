#include <stdlib.h>

void ArrayInsertFront(int* arr, int lenght, int value)
{
    if(lenght <= 0)
        return;

    for(int i = lenght -1; i > 0; --i)
    {
        arr[i] = arr[i-1];
    }

    arr[0] = value;
}

void ArrayInsertAt(int* arr, int lenght, int index, int value)
{
    if(lenght <= 0)
        return;

    if(index < 0 || index >= lenght)
        return;

    for(int i = index; i > 0; --i)
    {
        arr[i] = arr[i-1];
    }
    
    arr[index] = value;
}

void ArrayInsertBack(int* arr, int lenght, int value)
{
    if(lenght <= 0)
        return;

    for(int i = 0; i < lenght; ++i)
    {
        arr[i] = arr[i+1];
    }

    arr[lenght-1] = value;
}
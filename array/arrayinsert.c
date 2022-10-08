#include <stdlib.h>

void ArrayInsertFront(int* arr, int value)
{
    size_t lenght = sizeof(arr)/sizeof(arr[0]);

    for(size_t i = lenght -1; i > 0; --i)
    {
        arr[i] = arr[i-1];
    }

    arr[0] = value;
}

void ArrayInsertAt(int* arr, int index, int value)
{
    size_t lenght = sizeof(arr)/sizeof(arr[0]);
    if(index < 0 || index >= lenght)
        return;

    for(size_t i = index; i > 0; --i)
    {
        arr[i] = arr[i-1];
    }
    
    arr[index] = value;
}

void ArrayInsertBack(int* arr, int value)
{
    size_t lenght = sizeof(arr)/sizeof(arr[0]);

    for(size_t i = 0; i < lenght; ++i)
    {
        arr[i] = arr[i+1];
    }

    arr[lenght-1] = value;
}
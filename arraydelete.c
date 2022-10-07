#include <stdlib.h>

void ArrayDeleteBegin(int* arr)
{
    size_t lenght = sizeof(arr)/sizeof(arr[0]);

    for(size_t i = 0; i < lenght-1 ; ++i)
    {
        arr[i] = arr[i+1];
    }
}

void ArrayDeleteAt(int* arr, int index)
{
    size_t lenght = sizeof(arr)/sizeof(arr[0]);
    if(index < 0 || index >= lenght)
        return;

    for(size_t i = index-1; i < lenght-1 ; ++i)
    {
        arr[i] = arr[i+1];
    }
}

int ArrayDeleteValue(int* arr, int value)
{
    size_t lenght = sizeof(arr)/sizeof(arr[0]);

    for(size_t i = 0; i < lenght-1 ; ++i)
    {
        if(arr[i] == value)
        {
            for(size_t j = i; j < lenght-1 ; ++j)
            {
                arr[j] = arr[i+1];
            }
            return i;
        }
    }
    return -1;
}
#include <stdlib.h>

void ArrayDeleteBegin(int* arr, int lenght)
{
    if(lenght <= 0)
        return;

    for(size_t i = 0; i < lenght-1 ; ++i)
    {
        arr[i] = arr[i+1];
    }
}

void ArrayDeleteAt(int* arr, int lenght, int index)
{
    if(lenght <= 0)
        return;

    if(index < 0 || index >= lenght)
        return;

    for(int i = index-1; i < lenght-1 ; ++i)
    {
        arr[i] = arr[i+1];
    }
}

int ArrayDeleteValue(int* arr, int lenght, int value)
{
    if(lenght <= 0)
        return -1;

    for(int i = 0; i < lenght-1 ; ++i)
    {
        if(arr[i] == value)
        {
            for(int j = i; j < lenght-1 ; ++j)
            {
                arr[j] = arr[i+1];
            }
            return i;
        }
    }
    return -1;
}
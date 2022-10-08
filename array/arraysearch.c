#include <stdlib.h>

int ArrayLinearSearch(int* arr, int value)
{
    size_t lenght = sizeof(arr)/sizeof(arr[0]);

    for(size_t i = 0; i < lenght-1 ; ++i)
    {
        if(arr[i] == value)
            return i;
    }

    return -1;
}
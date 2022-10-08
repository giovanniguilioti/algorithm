#include <stdlib.h>

int ArrayLinearSearch(int* arr, int lenght, int value)
{
    if(lenght <= 0)
        return -1;

    for(int i = 0; i < lenght-1 ; ++i)
    {
        if(arr[i] == value)
            return i;
    }

    return -1;
}
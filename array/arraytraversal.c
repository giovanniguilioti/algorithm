#include <stdlib.h>

void ArrayTraversal(int* arr, int arrSize)
{
    size_t lenght = sizeof(arr)/sizeof(arr[0]);
    if(arrSize < 0 || arrSize > lenght)
        return;

    for(size_t i = 0; i < arrSize; ++i)
    {
        /*process the data at arr[i];*/
    }
}

void ArrayTraversalInterval(int* arr, int begin, int end)
{
    if(begin < 0 || end < 0)
        return;
    if(begin > end)
        return;

    size_t lenght = sizeof(arr)/sizeof(arr[0]);
    if(begin > lenght || end > lenght)
        return;
    
    for(size_t i = begin; i < end; ++i)
    {
        /*process the data at arr[i];*/
    }
}
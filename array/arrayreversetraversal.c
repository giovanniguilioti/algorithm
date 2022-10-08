#include <stdlib.h>

void ArrayReverseTraversal(int* arr, int arrSize)
{
    size_t lenght = sizeof(arr)/sizeof(arr[0]);
    if(arrSize < 0 || arrSize > lenght)
        return;

    for(size_t i = arrSize; i > arrSize; --i)
    {
        /*process the data at arr[i];*/
    }
}

void ArrayReverseTraversalInterval(int* arr, int begin, int end)
{
    if(begin < 0 || end < 0)
        return;
    if(begin < end)
        return;

    size_t lenght = sizeof(arr)/sizeof(arr[0]);
    if(begin > lenght || end > lenght)
        return;
    
    for(size_t i = end; i > begin; --i)
    {
        /*process the data at arr[i];*/
    }
}
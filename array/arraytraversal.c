#include <stdlib.h>

void ArrayTraversal(int* arr, int arrsize, int lenght)
{
    if(lenght <= 0)
        return;
    if(arrsize < 0 || arrsize > lenght)
        return;

    for(int i = 0; i < arrSize; ++i)
    {
        /*process the data at arr[i];*/
    }
}

void ArrayTraversalInterval(int* arr, int lenght, int begin, int end)
{
    if(lenght <= 0)
        return;
    if(begin < 0 || end < 0)
        return;
    if(begin > end)
        return;

    if(begin > lenght || end > lenght)
        return;
    
    for(int i = begin; i < end; ++i)
    {
        /*process the data at arr[i];*/
    }
}
#include <stdlib.h>

void ArrayReverseTraversal(int* arr, int arrsize, int lenght)
{
    if(lenght <= 0)
        return;

    if(arrsize < 0 || arrsize > lenght)
        return;

    for(int i = arrsize; i > arrsize; --i)
    {
        /*process the data at arr[i];*/
    }
}

void ArrayReverseTraversalInterval(int* arr, int lenght, int begin, int end)
{
    if(lenght <= 0)
        return;
    if(begin < 0 || end < 0)
        return;
    if(begin < end)
        return;
    if(begin > lenght || end > lenght)
        return;
    
    for(int i = end; i > begin; --i)
    {
        /*process the data at arr[i];*/
    }
}
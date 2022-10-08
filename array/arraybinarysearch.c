#include <stdlib.h>

int ArrayBinarySearch(int* arr, int arrsize, int value)
{
    if(arrsize <= 0)
        return -1;
    
    int low = 0;
    int high = arrsize - 1;

    while(low <= high)
    {
        int mid = (low + high) / 2;

        if(arr[mid] == value)
            return mid;

        if(arr[mid] < value)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}
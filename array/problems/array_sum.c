int simpleArraySum(int ar_count, int* ar)
{
    int sum = 0;
    for(size_t i = 0; i < ar_count; i++)
        sum += ar[i];
        
    return sum;
}
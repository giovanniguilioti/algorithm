void plusMinus(int arr_count, int* arr)
{
    double positive = 0.0;
    double negative = 0.0;
    double zero = 0.0;
    
    for(int i = 0; i < arr_count; ++i)
    {
        if(arr[i] < 0)
            negative += (1.0/arr_count);
        else if(arr[i] > 0)
            positive += (1.0/arr_count);
        else
            zero += (1.0/arr_count);
    }
    
    printf("%f\n", positive);
    printf("%f\n", negative);
    printf("%f\n", zero);
}
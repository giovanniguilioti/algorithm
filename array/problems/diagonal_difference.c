int diagonalDifference(int arr_rows, int arr_columns, int** arr)
{
    int dif = 0;

    for(int i = 0, j = arr_columns-1; i < arr_rows, j >= 0; ++i, --j)
        dif += (arr[i][i] - arr[i][j]);

    if(dif < 0)
        dif = -dif;
        
    return dif;
}
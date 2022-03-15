int row_start = 0;
int row_end = n - 1;
int column_start = 0;
int column_end = m - 1;

while (row_start <= row_end && column_start <= column_end)
{
    // for row start
    for (int col = column_start; col <= column_end; col++)
    {
        cout << arr[row_start][col] << " ";
    }
    row_start++;

    // column end
    for (int row = row_start; row <= row_end; row++)
    {
        cout << arr[row][column_end] << " ";
    }
    column_end--;

    // row end
    for (int col = column_end; col >= column_start; col--)
    {
        cout << arr[row_end][col] << " ";
    }
    row_end--;

    // column start
    for (int row = row_end; row >= row_start; row--)
    {
        cout << arr[row][column_start] << " ";
    }
    column_start++;
}
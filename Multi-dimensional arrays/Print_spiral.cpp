void spiralPrint(int **input, int nRows, int nCols)
{
    // Write your code here
    int t = 0, r = nRows - 1, l = 0, c = nCols - 1, d = 0;
    while (l <= c and t <= r)
    {
        if (d == 0)
        {
            for (int i = l; i <= c; ++i)
            {
                cout << input[t][i] << " ";
            }
            d = 1, t++;
        }
        else if (d == 1)
        {
            for (int i = t; i <= r; ++i)
            {
                cout << input[i][c] << " ";
            }
            d = 2, c--;
        }
        else if (d == 2)
        {
            for (int i = c; i >= l; --i)
            {
                cout << input[r][i] << " ";
            }
            d = 3, r--;
        }
        else if (d == 3)
        {
            for (int i = r; i >= t; --i)
            {
                cout << input[i][l] << " ";
            }
            d = 0, l++;
        }
    }
}
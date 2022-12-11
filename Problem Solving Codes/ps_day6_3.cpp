#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the order of the matrix" << endl;
    int n, m, flag = 0, j, i, a[100][100];
    cin >> m >> n;
    cout << "Enter the elements of the matrix" << endl;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            cin >> a[i][j];
    }
    int sumd1 = 0, sumd2 = 0;
    for (i = 0; i < n; i++)
    {
        sumd1 += a[i][i];
        sumd2 += a[i][n - 1 - i];
    }
    if (sumd1 != sumd2)
    {
        cout << "Not a magic matrix";
        exit(0);
    }
    for (i = 0; i < n; i++)
    {

        int rowSum = 0, colSum = 0;
        for (j = 0; j < n; j++)
        {
            rowSum += a[i][j];
            colSum += a[j][i];
        }
        if (rowSum != colSum || colSum != sumd1)
        {
            cout << "Not a magic matrix";
            exit(0);
        }
    }
    cout << "Magic Matrix";

    return 0;
}
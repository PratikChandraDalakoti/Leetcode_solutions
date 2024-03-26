#include <iostream>
#include <vector>
using namespace std;
int diagonalSum(vector<vector<int>> &mat)
{
    int i, j, n = mat[0].size(), c = 0;
    int k = n - 1;
    for (i = 0; i < n; i++)
    {
        c += mat[i][i] + mat[i][n - i - 1];
    }    
        if (n % 2 == 1)
        {
            c -= mat[n / 2][n / 2];
        }
    return c;
}
int main()
{
    vector<vector<int>> mat = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int res = diagonalSum(mat);
    cout << res;
}
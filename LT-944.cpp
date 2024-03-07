#include <iostream>
#include <vector>
using namespace std;
int minDeletionSize(vector<string> &strs)
{
    int row = strs.size();
    int col = strs[0].size();
    int c = 0;
    for (auto i = 0; i < col; i++)
    {
        for (auto j = 1; j < row; j++)
        {
            if (strs[j][i] < strs[j - 1][i])
            {
                c++;
                break;
            }
        }
    }
    return c;
}
int main()
{
    vector<string> strs = {"cba", "daf", "ghi"};
    int res = minDeletionSize(strs);
    cout << res;
}
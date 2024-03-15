#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> flipAndInvertImage(vector<vector<int>> &image)
{
    vector<vector<int>> res(image.size());
    for (int i = 0; i < image.size(); i++)
    {
        for (int j = image[i].size() - 1; j >= 0; j--)
        {
            res[i].push_back(image[i][j] == 0?1:0);
        }
    }
    return res;
}
int main()
{
    vector<vector<int>> image = {{1, 1, 0}, {1, 0, 1}, {0, 0, 0}};
    vector<vector<int>> res = flipAndInvertImage(image);
    for (const auto &img : res)
    {
        for (const auto &r : img)
        {
            cout << r << "\t";
        }
        cout << endl;
    }
}
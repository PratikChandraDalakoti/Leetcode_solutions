#include <iostream>
#include <vector>
using namespace std;
vector<int> createTargetArray(vector<int> &nums, vector<int> &index)
{
    vector<int> res;
    for (int i = 0; i < nums.size(); i++)
    {
        res.insert(res.begin() + index[i], nums[i]);
    }
    return res;
}
int main()
{
    vector<int> nums = {0, 1, 2, 3, 4};
    vector<int> index = {0, 1, 2, 2, 1};
    vector<int> res = createTargetArray(nums, index);
    for (int r : res)
        cout << r;
}
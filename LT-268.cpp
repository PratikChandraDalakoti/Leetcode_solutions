#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int missingNumber(vector<int> &nums)
{
    int range = nums.size();
    sort(nums.begin(), nums.end());
    for (auto i = 0; i < range; i++)
    {
        if (i != nums[i])
            return i;
    }
    return (nums[range - 1] != range) ? range : -1;
}
int main()
{
    vector<int> nums = {0, 1};
    int res = missingNumber(nums);
    cout << res;
}
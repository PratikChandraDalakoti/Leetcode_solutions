#include <iostream>
#include <vector>
#include <map>
#include <climits>
#include<algorithm>
using namespace std;
int maxFrequencyElements(vector<int> &nums)
{
    map<int, int> mp;
    int mx = INT_MIN, res = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        mp[nums[i]]++;
        mx = max(mp[nums[i]], mx);
    }
    for (auto const &pair : mp)
    {
        if (pair.second == mx)
            res += pair.second;
    }
    return res;
}
int main()
{
    vector<int> nums = {10, 12, 11, 9, 6, 19, 11};
    int res = maxFrequencyElements(nums);
    cout << res;
}
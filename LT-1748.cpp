#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int sumOfUnique(vector<int> &nums)
{
    unordered_map<int, int> mp;
    int sum = 0;
    for (const auto num : nums)
    {
        mp[num]++;
    }
    for (auto pair : mp)
    {
        if (pair.second == 1)
            sum += pair.first;
    }
    return sum;
}

int main()
{
    vector<int> nums = {1,2,3,2};
    int res = sumOfUnique(nums);
    cout << res;
}
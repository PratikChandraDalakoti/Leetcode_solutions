#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int countKDifference(vector<int> &nums, int k)
{
    unordered_map<int, int> mp;
    int count = 0;
    for (auto num : nums)
    {
        count += mp[num + k] + mp[num - k]; // Here we are supposing that pair(x,y) exist for k... so if we add and subtract x+k and x-k, we should get y in the array itelf, if it's there... then it will count otrherwise it won't count.
        mp[num]++;
    }
    return count;
}

int main()
{
    vector<int> nums = {1, 2, 2, 1};
    int k = 1;
    int res = countKDifference(nums, k);
    cout << res;
}
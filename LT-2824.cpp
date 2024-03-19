#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int countPairs(vector<int> &nums, int target)
{
    sort(nums.begin(), nums.end()); // Sorted array will be -1, 1, 1, 2, 3
    int left = 0;
    int right = nums.size() - 1;
    int count = 0;
    while (left < right)
    {
        if (nums[left] + nums[right] < target)
        {
            count += right - left;
            left++;
        }
        else
        {
            right--;
        }
    }
    return count;
}
int main()
{
    vector<int> nums = {-1, 1, 2, 3, 1};
    int target = 2;
    int res = countPairs(nums, target);
    cout << res;
}
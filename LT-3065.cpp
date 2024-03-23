#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int minOperations(vector<int> &nums, int k)
{   sort(nums.begin(), nums.end());
    int left = 0, right=nums.size()-1;
    int mid, res;
    while(left <= right){
        mid = left + (right - left) / 2;
        if(nums[mid] >= k){
            res = mid;
            right = mid - 1;
        } 
        else left = mid + 1;
    }
    return res;
}
int main()
{
    vector<int> nums = {2,11,10,1,3};
    int k = 10;
    int res = minOperations(nums, k);
    cout << res;
}
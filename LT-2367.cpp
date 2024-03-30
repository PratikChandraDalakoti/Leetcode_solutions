#include <iostream>
#include <vector>
#include <set>
using namespace std;
int arithmeticTriplets(vector<int> &nums, int diff)
{
    set<int> uset(nums.begin(), nums.end());
    int i, count = 0;

    for (i = 0; i < nums.size(); i++)
    {
        if (uset.find(nums[i] + diff)!=uset.end() && uset.find(nums[i] + 2*diff) != uset.end())
            count++;
        cout << count;
    }
    return count;
}
int main()
{
    vector<int> nums = {0,1,4,6,7,10};
    int diff = 3;
    int res = arithmeticTriplets(nums, diff);
    cout << res;
}
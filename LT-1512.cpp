#include <iostream>
#include <vector>
using namespace std;
int numIdenticalPairs(vector<int> &nums)
{
    int i, j, c = 0;
    for (i = 0; i < nums.size() - 1; i++)
    {
        for (j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] == nums[j])
                c++;
        }
    }
    return c;
}
int main()
{
    vector<int> nums = {1, 1, 1, 1};
    int res = numIdenticalPairs(nums);
    cout << res;
}
#include <iostream>
#include <vector>
using namespace std;
int sumIndicesWithKSetBits(vector<int> &nums, int k)
{
    int i,j, c = 0;
    for (i=0;i<nums.size();i++)
    {   int temp = 0;

        for (j = sizeof(i) * 8 - 1; j >= 0; --j)
        {
            int bit = (i >> j) & 1;
            if(bit == 1){
                temp++;
            }
        }
        if(temp == k) c+=nums[i];
    }
    return c;
}
int main()
{
    vector<int> nums = {5,10,1,5,2};
    int k = 1;
    int res = sumIndicesWithKSetBits(nums, k);
    cout << endl << res;
}
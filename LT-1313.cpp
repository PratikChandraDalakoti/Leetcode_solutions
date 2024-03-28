#include <iostream>
#include <vector>
using namespace std;
vector<int> decompressRLElist(vector<int> &nums)
{
    vector<int> res;
    int i, j;
    for(i=0;i<nums.size();i+=2){
        for(j=0;j<nums[i];j++){
            res.push_back(nums[i+1]);
        }
    }
    return res;
}
int main()
{
    vector<int> nums = {1,1,2,3};
    vector<int> res = decompressRLElist(nums);
    for(auto num: res){
        cout << num;
    }
}
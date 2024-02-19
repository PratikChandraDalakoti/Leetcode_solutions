#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

vector<int> numberGame(vector<int>& nums) {
    sort(nums.begin(),nums.end());   
    vector<int> res;
    for(auto i=0;i<nums.size()-1;i+=2)
        {res.push_back(nums[i+1]);
        res.push_back(nums[i]);
        }
    return res;
}
int main(){
vector<int> nums = {5,4,2,3};
vector<int> res = numberGame(nums);
for(const auto &i:res)
    cout<<i;
}
#include<iostream>
#include<vector>
using namespace std;

vector<int> runningSum(vector<int>& nums) {
        vector<int> res;
        int sum = 0;
        for(const auto &num: nums){
            sum+=num;
            res.push_back(sum);
        }
        return res;
}
int main(){
    vector<int> nums = {1,2,3,4,5};
    vector<int> res = runningSum(nums);
    for(auto num: res) cout << num;
}
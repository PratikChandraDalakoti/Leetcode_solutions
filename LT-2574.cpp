#include<iostream>
#include<vector>
using namespace std;

vector<int> leftRightDifference(vector<int>& nums) {
        int i, sum = 0, n = nums.size();
        vector<int> res;
        res.push_back(sum);
        for(i=1;i<n;i++){
            sum+=nums[i-1];
            res.push_back(sum);
        }
        sum = 0;
        res[n-1]-=sum;
        for(i=n-2;i>=0;i--){
            sum+=nums[i+1];
            cout << sum << "\t";
            res[i] = abs(res[i] - sum);
        }
        return res;
    }
int main(){
    vector<int> nums = {1};
    vector<int> res = leftRightDifference(nums);
    for(auto n: res) cout << n;
}
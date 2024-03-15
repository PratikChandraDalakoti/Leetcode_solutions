#include<iostream>
#include<vector>
using namespace std;
vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res;
        int size = nums.size();
        vector<int> pref(size);
        vector<int> suf(size);
        pref[0] = 1;
        suf[size-1] = 1;
        int prod=1;
        for(auto i=1;i<size;i++){
            pref[i] = pref[i-1] * nums[i-1];
        }
        for(auto i=size - 2;i>=0;i--){
            suf[i] = suf[i+1] * nums[i+1];
        }

        for(auto j = 0;j<size;j++){
            res.push_back(pref[j] * suf[j]);


        }
        
        return res;
    }
int main(){
    vector<int> nums = {-1,1,0,-3,3};
    vector<int> res = productExceptSelf(nums);
    for(auto &r:res){
        cout << r;
    }
}
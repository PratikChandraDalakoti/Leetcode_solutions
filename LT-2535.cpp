#include<iostream>
#include<vector>
using namespace std;
int differenceOfSum(vector<int>& nums) {
        int s = 0,a = 0;
        for(auto num:nums){
                s += num;
                while(num!=0){
                    a += num %10;
                    num/=10;
                }
        }
        return abs(s - a);
    }
int main(){
    vector<int> nums = {1,15,6,3};
    int res = differenceOfSum(nums);
    cout << res;
}
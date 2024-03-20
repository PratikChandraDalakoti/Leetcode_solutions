#include <iostream>
#include <vector>
using namespace std;
vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int i,j, n=nums.size(), c ;
        vector<int> res;
        for(i=0;i< n;i++){
            c = 0;
            for(j=0;j<n;j++){
            if(nums[i] > nums[j] && i!=j){
                c++;
                }
            }
            res.push_back(c);
        }   
        return res;
    }
int main(){
    vector<int> nums = {8,1,2,2,3};
    vector<int> res = smallerNumbersThanCurrent(nums);
    for(auto num: res) cout << num;
}
#include <iostream>
#include <vector>
using namespace std;
vector<int> shuffle(vector<int>& nums, int n) {
        int i;
        vector<int> res ;
        for(i = 0;i< n;i++){
            res.push_back(nums[i]);
            res.push_back(nums[i+n]);
        }
        return res;
    }
int main(){
    vector<int> nums = {1,2,3,4,4,3,2,1};
    int n = 4;
    vector<int> res = shuffle(nums, n);
    for(auto r:res){
        cout << r << endl;
    }

}
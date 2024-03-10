#include <iostream>
#include <vector>
#include<map>
using namespace std;
vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
{   map<int,int> mp;
    vector<int> res;
    int flag = 1;
    for(auto i = 0;i<nums2.size();i++){
        mp[nums2[i]] = i;
    }
    for(auto x: nums1){
        for(auto y: mp){
            if(y.first > x && flag == 1){
                res.push_back(y.first);
                flag = 0;
            }

        }
        if(flag == 1){
            res.push_back(-1);
        }
        flag = 0;

    }
    for (auto x : mp)
    {cout<< x.first << "\t" << x.second << "\n";
    }
    return res;
}
int main(){
    vector<int> nums1 = {4, 1, 2};
    vector<int> nums2 = {1, 3,4,2};
    vector<int> res = nextGreaterElement(nums1, nums2);
    for (auto &x : res)
        cout << x << endl;
}
#include <iostream>
#include <vector>
#include <set>

using namespace std;
vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
{
    set<int> nm1(nums1.begin(), nums1.end());
    set<int> nm2;
    for(const auto &n2:nums2){
        if(nm1.find(n2)!=nm1.end()){
            nm2.insert(n2);
        }
    }
    
    vector<int> res;
    for (const auto &n2 : nm2)
    {
        res.push_back(n2);
    }        
    return res;
}
int main()
{
    vector<int> nums1 = {4, 9, 5};
    vector<int> nums2 = {9,4,9,8,4};
    vector<int> res = intersection(nums1, nums2);
    for (auto const &r : res)
    {
        cout << r;
    }
}
#include <vector>
#include <iostream>
#include <unordered_map>
using namespace std;
vector<int> findDuplicates(vector<int> &nums)
{
    unordered_map<int, int> mp;
    vector<int> res;
    for (auto num : nums)
    {
        mp[num]++;
    }
    for(auto pair:mp){
        if(pair.second > 1) res.push_back(pair.first); 
    }
    return res;
}
int main()
{
    vector<int> nums = {1,1,2};
    vector<int> res = findDuplicates(nums);
    for(auto num:res) cout << num;
}
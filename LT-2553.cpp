#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
vector<int> separateDigits(vector<int> &nums)
{
    vector<int> res;
    vector<int> temp;
    for(auto r: nums){
        while(r>0){
            temp.push_back(r%10);
            r = r/ 10;
        }
        reverse(temp.begin(),temp.end());
        for(auto t:temp) res.push_back(t);
        temp.clear();

    }
    return res;
}
int main()
{
    vector<int> nums = {13,25,83,77};
    vector<int> res = separateDigits(nums);
    for (auto r : res)
        cout << r;
}
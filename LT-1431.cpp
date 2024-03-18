#include <iostream>
#include <vector>
using namespace std;

vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
{   int max = -1, i;
    vector<bool> res;
    for (auto candy : candies)
    {
        if (candy > max) max = candy;
    }
    for(i=0;i<candies.size();i++){
        if(candies[i]+extraCandies >= max) res.push_back(true);
        else res.push_back(false);
    }
    return res;
}
int main()
{
    vector<int> candies = {2, 3, 5, 1, 3};
    int extraCandies = 3;
    vector<bool> res = kidsWithCandies(candies, extraCandies);
    for(auto r:res)cout << r;
}
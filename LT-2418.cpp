#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;
vector<string> sortPeople(vector<string> &names, vector<int> &heights)
{
    unordered_map<int, string> ump;
    int i;
    vector<string> res;
    for (i = 0; i < names.size(); i++)
    {
        ump[heights[i]] = names[i];
    }
    sort(heights.begin(), heights.end());
    for (i=heights.size()-1;i>=0;i--)
    {
        res.push_back(ump[heights[i]]);
    }
    return res;
}
int main()
{
    vector<string> names = {"Mary", "John", "Emma"};
    vector<int> heights = {180, 165, 170};
    vector<string> res = sortPeople(names, heights);
    for (auto r : res)
    {
        cout << r << endl;
    }
}
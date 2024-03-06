#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <climits>
using namespace std;
vector<string> findRestaurant(vector<string> &list1, vector<string> &list2)
{
    map<string, int> mp;
    vector<string> tmp;
    vector<string> res;
    auto i = 0;
    int min = INT_MAX;
    for (const string &l1 : list1)
    {
        mp[l1] = i;
        i++;
    }
    i = 0;
    for (const string &l2 : list2)
    {
        if (mp.find(l2) != mp.end())
        {
            mp[l2] += i;
            tmp.push_back(l2);
        }
        else
        {
            mp[l2] = i;
        }
        i++;
    }
    for (const auto &r : tmp)
    {
        if (min > mp[r])
            min = mp[r];
    }
    for (const auto &r : tmp)
    {
        if (min == mp[r])
            res.push_back(r);
    }
    // for (const auto &pair : mp)
    // {
    //     cout << pair.first << "\t"
    //          << pair.second << "\n";
    // }
    return res;
}
int main()
{
    vector<string> l1 = {"happy", "sad", "good"};
    vector<string> l2 = {"sad","happy","good"};
    vector<string> res = findRestaurant(l1, l2);

    for (auto r : res)
    {
        cout << r << endl;
    }
}
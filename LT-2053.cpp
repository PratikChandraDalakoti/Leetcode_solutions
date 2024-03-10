#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;
string kthDistinct(vector<string> &arr, int k)
{
    unordered_map<string, int> mp;
    string res = "";
    int count = 0;
    for (const auto &a : arr)
    {
        mp[a]++;
    }
    for (const auto &a : arr)
    {
        if(mp[a] == 1)
            count++;

        if(count == k )
            return a;
    }
    return "";
}
int main()
{
    vector<string> arr = {"d", "b", "c", "b", "c", "a"};
    int k = 2;
    string res = kthDistinct(arr, k);
    cout << res;
}

#include <iostream>
#include <vector>
#include<climits>
#include<algorithm>
using namespace std;
vector<int> shortestToChar(string s, char c)
{
    vector<int> index;
    vector<int> res;
    for (auto i = 0; i < s.length(); i++)
    {
        if (s[i] == c)
            index.push_back(i);
    }
    auto j = 0;
    for (auto i = 0; i < s.length(); i++)
    {   auto m = INT_MAX;
        for(auto j = 0;j<index.size();j++){
            m = min(m,abs(i - index[j]));
        }
        res.push_back(m);
    }
        return res;
}
int main()
{
    string s = "loveleetcode";
    char c = 'e';
    vector<int> res = shortestToChar(s, c);
    for(auto r: res){
        cout << r << endl;
    }
}
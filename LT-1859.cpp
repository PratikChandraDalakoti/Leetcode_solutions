#include <iostream>
#include <vector>
#include <unordered_map>
#include <map>
using namespace std;
string sortSentence(string s)
{
    map<int, string> mp;
    string temp = "";
    string res;
    for (size_t i = 0; i < s.size(); i++)
    {
        if (s[i] != ' ')
        {
            temp += s[i];
        }
        else
        {
            cout << temp[temp.size() - 1] << "\n";
            temp.erase(temp.size() - 1);
            mp[temp[temp.size() - 1]] = temp;
            temp = "";
        }
    }
    cout << temp[temp.size() - 1] << "\n";
    temp.erase(temp.size() - 1);
    mp[temp[temp.size() - 1]] = temp;
    temp = "";

    for (const auto &x : mp)
    {   res += x.second;
        res += " ";
        cout << x.first << "\t" << x.second << "\n";
    }
    return res;
}
int main()
{
    string s = "is2 sentence4 This1 a3";
    string res = sortSentence(s);
    cout << res;
}
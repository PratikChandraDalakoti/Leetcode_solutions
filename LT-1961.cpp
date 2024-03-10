#include <iostream>
#include <vector>
using namespace std;

bool isPrefixString(string s, vector<string> &words)
{   string res = "";
    for(const auto &w:words){
        res += w;
        if(res == s) return true;
        if(res.length() >= s.length()) return false;
        }
    return false;
}   
int main()
{
    vector<string> words = {"apples","i","love","leetcode"};
    string s = "iloveleetcode";
    bool res = isPrefixString(s,words);
    cout << res;
}
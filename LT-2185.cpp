#include <iostream>
#include <vector>
using namespace std;
int prefixCount(vector<string> &words, string pref)
{
    int res = 0, flag = 0;
    for (const auto &word : words)
    {
        if(word.substr(0,pref.size()) == pref)
            res++;
    }
    return res;
}
int main()
{
    vector<string> words = {"leetcode", "win", "loops", "success"};
    string pref = "code";
    int res = prefixCount(words, pref);
    cout << res;
}
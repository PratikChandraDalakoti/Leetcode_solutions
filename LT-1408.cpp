#include <iostream>
#include <vector>
#include <string>
#include <set>
using namespace std;
vector<string> stringMatching(vector<string> &words)
{
    vector<string> res;
    for (int i = 0; i < words.size(); i++)
    {
        for (int j = 0; j < words.size(); j++)
        {
            if ((words[i].find(words[j])) != string::npos && (words[i] != words[j]))
                res.push_back(words[j]);
        }
    }
    set<string> st(res.begin(), res.end());
    vector<string> result(st.begin(), st.end());
    return result;
}
int main()
{
    vector<string> words = {"leetcoder","leetcode","od","hamlet","am"};
    vector<string> res = stringMatching(words);
    for (auto const &r : res)
    {
        cout << r << endl;
    }
}
#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <map>
using namespace std;

int maximumNumberOfStringPairs(vector<string> &words)
{
    unordered_map<string, int> mp;
    string s;
    int max = 0;
    for (const string &word : words)
    {
        s = word;
        reverse(s.begin(), s.end());
        if (mp.count(s))
        {
            max++;
            mp.erase(word);
        }
        else
        {
            mp[word]++;
        }
    }
    return max;
}
int main()
{
    vector<string> words = {"ab", "ba", "cc"};
    int max = maximumNumberOfStringPairs(words);
    cout << max;
}
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int countConsistentStrings(string allowed, vector<string> &words)
{
    unordered_set<char> ust(allowed.begin(), allowed.end());
    int c = 0;
    for (auto word : words)
    {
        int flag = 1;
        for (auto ch : word)
        {
            if (ust.find(ch) == ust.end())
                flag = 0;
        }
        if (flag == 1)
            c++;
    }
    return c;
}
int main()
{
    vector<string> words = {"ad", "bd", "aaab", "baa", "badab"};
    string allowed = "ab";
    int res = countConsistentStrings(allowed, words);
    cout << res;
}
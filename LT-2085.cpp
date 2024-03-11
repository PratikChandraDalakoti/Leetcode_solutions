#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>
using namespace std;
int countWords(vector<string> &words1, vector<string> &words2)
{
    unordered_map<string, int> ump1;
    unordered_map<string, int> ump2;

    int count = 0;
    for (const auto &w1 : words1)
        ump1[w1]++;
    for (const auto &w2 : words2)
        ump2[w2]++;

    if (ump1.size() >= ump2.size())
    {
        for (auto i : ump1)
        {
            count += (i.second == 1 && ump2[i.first] == 1);
        }
    }
    else{
        for (auto i : ump2)
        {
            count += (i.second == 1 && ump1[i.first] == 1);
        }
    }

    return count;
}

int main()
{
    vector<string> words1 = {"leetcode", "is", "amazing", "as", "is"};
    vector<string> words2 = {"amazing", "leetcode", "is"};
    int res = countWords(words1, words2);
    cout << res;
}
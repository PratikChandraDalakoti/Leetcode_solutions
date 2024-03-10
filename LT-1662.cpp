#include <iostream>
#include <vector>
using namespace std;
bool arrayStringsAreEqual(vector<string> &word1, vector<string> &word2)
{
    string c1 = "", c2 = "";
    for (const auto &w1 : word1)
    {
        c1 += w1;
    }
    for (const auto &w2 : word2)
    {
        c2 += w2;
    }
    return c1 == c2;
}
int main()
{
    vector<string> words1 = {"abc", "d", "defg"};
    vector<string> words2 = {"abcddefg"};
    bool ret = arrayStringsAreEqual(words1, words2);
    cout << ret;
}
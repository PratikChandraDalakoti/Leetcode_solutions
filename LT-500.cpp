#include <iostream>
#include <vector>
#include <map>
using namespace std;
vector<string> findWords(vector<string> &words)
{
    string a = "qwertyuiopQWERTYUIOP";
    string b = "asdfghjklASDFGHJKL";
    string c = "zxcvbnmZXCVBNM";

    map<char, int> mp;
    for (auto &i :a) mp[i] = 0;
    for (auto &i :b) mp[i] = 1;
    for (auto &i :c) mp[i] = 2;
    int flag = 0;
    vector<string> res;
    for (const auto &word : words)
    {
        auto index = mp[word[0]];
        for (auto i = 1; i < word.size(); i++)
        {
            // cout << "Word=" << word[i] << "\t" << mp[tolower(word[i])] << "\n";
            if (mp[word[i]] != index)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            res.push_back(word);
        }
        flag = 0;
    }

    return res;
}

int main()
{
    vector<string> words = {"qwertyuiop","Asdf"};
    vector<string> result = findWords(words);
    for (const auto &word : result)
    {
        cout << word << endl;
    }
}
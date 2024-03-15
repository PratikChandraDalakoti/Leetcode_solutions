#include <iostream>
#include <vector>
using namespace std;
int vowelStrings(vector<string> &words, int left, int right)
{
    int c = 0;
    string str = "aeiou";
    for (auto i = left; i <= right; i++)
    {
        char f = words[i][0];
        char l = words[i][words[i].length() - 1];
        if(str.find(f)!=string::npos && str.find(l)!=string::npos) c++;
    }
    return c;
}
int main()
{
    vector<string> words = {"hey", "aeo", "mu", "ooo", "artro"};
    int left = 1;
    int right = 4;
    int res = vowelStrings(words, left, right);
    cout << res;
}
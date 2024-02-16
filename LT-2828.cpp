#include <iostream>
#include <vector>
using namespace std;

bool isAcronym(vector<string> &words, string s)
{
    /*string res;
    for (const string &word : words)
    {
        res += word[0];
    }
    if (res == s) return true;
    else return false;
    */

   int j=0, len = s.length();
   for(const string &word: words){
    if(j>=len || s[j++] != word[0])
        return false;
   }
   return j == len;
}

int main()
{
    vector<string> words = {"a","b","c"};
    bool res = isAcronym(words, "abcd");
    cout << "Result is " << res;
    // for(auto i = )
}
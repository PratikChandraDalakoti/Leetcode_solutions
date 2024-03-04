#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;

int uniqueMorseRepresentations(vector<string> &words)
{
    map<char, string> mp;
    mp['a'] = ".-";
    mp['b'] = "-...";
    mp['c'] = "-.-.";
    mp['d'] = "-..";
    mp['e'] = ".";
    mp['f'] = "..-.";
    mp['g'] = "--.";
    mp['h'] = "....";
    mp['i'] = "..";
    mp['j'] = ".---";
    mp['k'] = "-.-";
    mp['l'] = ".-..";
    mp['m'] = "--";
    mp['n'] = "-.";
    mp['o'] = "---";
    mp['p'] = ".--.";
    mp['q'] = "--.-";
    mp['r'] = ".-.";
    mp['s'] = "...";
    mp['t'] = "-";
    mp['u'] = "..-";
    mp['v'] = "...-";
    mp['w'] = ".--";
    mp['x'] = "-..-";
    mp['y'] = "-.--";
    mp['z'] = "--..";

    string res = "";
    map<string, int> result;
    int sum = 0;
    for (const string &word : words)
    {
        for (const char &ch : word)
        {
            res += mp[ch];
        }
        result[res] = 1;
        res = "";
    }
    for (const auto &pair : result)
    {
        sum += pair.second;
    }
    return sum;
}
int main()
{
    vector<string> words = {"gin","zen","gig","msg"};
    int res = uniqueMorseRepresentations(words);
    return 0;
}
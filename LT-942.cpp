#include <iostream>
#include <vector>
using namespace std;
vector<int> diStringMatch(string s)
{
    int i = 0, d = s.length();
    vector<int> res;
    for (char c : s)
    {
        if (c == 'I')
        {
            res.push_back(i++);
        }
        else
        {res.push_back(d--);
        }
    }
    res.push_back(i);
    return res;
}
int main()
{
    string s = "DDD";
    vector<int> res = diStringMatch(s);
    for (auto r : res)
    {
        cout << r << endl;
    }
}
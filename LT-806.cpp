#include <iostream>
#include <vector>
using namespace std;
vector<int> numberOfLines(vector<int> &widths, string s)
{
    vector<int> res;
    int i = 0, sum = 0, lines = 0, pre;
    for (const auto str:s)
    {

        if (sum + widths[str - 'a'] <= 100)
        {
            sum += widths[str - 'a'];
        }
        else
        {   lines ++;
            sum = widths[str - 'a'];
        }
    }
    if(sum != 0 )lines++;
    res.push_back(lines);
    res.push_back(sum);

    return res;
}
int main()
{
    vector<int> widths = {10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10};
    string s = "abcdefghijklmnopqrstuvwxyz";
    vector<int> res = numberOfLines(widths, s);
    for (auto r : res)
    {
        cout << r << "\t";
    }
}
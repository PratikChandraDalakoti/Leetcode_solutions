#include <iostream>
#include <vector>

using namespace std;
string restoreString(string s, vector<int> &indices)
{
    int i=0;
    string ans = s;
    for (auto num : indices)
    {   
        ans[num] = s[i];
        i++;
    }
    return ans;
}

int main()
{
    vector<int> indices = {4,5,6,7,0,2,1,3};
    string s = "codeleet";
    string res = restoreString(s, indices);
    cout << res;
}
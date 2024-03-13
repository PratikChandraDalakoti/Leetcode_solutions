#include <iostream>
using namespace std;

string defangIPaddr(string address)
{
    string res = "";
    for (auto &ad : address)
    {
        if (ad == '.')
            res += "[.]";
        else
            res += ad;
    }
    return res;
}
int main()
{
    string address = "1.1.1.1";
    string res = defangIPaddr(address);
    cout << res;
}
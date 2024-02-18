#include <iostream>
#include <vector>
#include<string>
using namespace std;

int countSeniors(vector<string> &details)
{
    int count = 0;
    for (const string &detail : details)
    {   
        if( stoi(detail.substr(11,2)) > 60 ) count ++;
    }
    return count;
}

int main()
{
    vector<string> details = {"7868190130M7522","5303914400F9211","9273338290F4010"};
    int res = countSeniors(details);
    cout << res;    
}
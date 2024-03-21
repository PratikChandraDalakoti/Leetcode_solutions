#include <iostream>
#include <vector>
using namespace std;
int numberOfEmployeesWhoMetTarget(vector<int> &hours, int target)
{   int c = 0;
    for(auto hr:hours){
        if(hr >= target) c++;
    }
    return c;
}
int main()
{
    vector<int> hours = {0,1,2,3,4};
    int target = 2;
    int res = numberOfEmployeesWhoMetTarget(hours, target);
    cout << res;
}
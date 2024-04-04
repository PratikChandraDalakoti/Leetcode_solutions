#include <iostream>
#include <vector>
using namespace std;
int largestAltitude(vector<int> &gain)
{
    int max = 0, ht = 0;
    for (int i = 0; i < gain.size(); i++)
    {
        ht += gain[i];
        if (ht > max)
            max = ht;
    }
    return max;
}
int main()
{
    vector<int> gain = {-4,-3,-2,-1,4,3,2};
    int res = largestAltitude(gain);
    cout << res;
}
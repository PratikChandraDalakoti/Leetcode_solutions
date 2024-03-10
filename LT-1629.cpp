#include <iostream>
#include <vector>
using namespace std;

char slowestKey(vector<int> &releaseTimes, string keysPressed)
{
    char res = keysPressed[0];
    int max = releaseTimes[0], temp;
    for (auto i = 1; i < releaseTimes.size(); i++)
    {
        temp = releaseTimes[i] - releaseTimes[i - 1];
        if (temp > max)
        {   max = temp;
            res = keysPressed[i];
        }
        else if (temp == max && res < keysPressed[i])
            {
                    res = keysPressed[i];
            }
        
    }
    return res;
}
int main()
{
    vector<int> releaseTimes = {9, 29, 49, 50};
    string keysPressed = "cbcd";
    char res = slowestKey(releaseTimes, keysPressed);
    cout << res;
}
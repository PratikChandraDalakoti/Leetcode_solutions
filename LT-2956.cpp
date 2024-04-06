#include <iostream>
#include <vector>
using namespace std;
vector<int> findIntersectionValues(vector<int> &nums1, vector<int> &nums2)
{
    int i, j, c = 0;
    for (i = 0; i < nums1.size(); i++)
    {
        for (j = 0; j < nums2.size(); j++)
        {
            if (nums1[i] == nums2[j]){
                c++;
                break;
        }
        }
    }
    vector<int> res;
    res.push_back(c);
    c = 0;
    for (i = 0; i < nums2.size(); i++)
    {
        for (j = 0; j < nums1.size(); j++)
        {
            if (nums1[j] == nums2[i]){
                c++;
                break;
            }
        }
    }
    res.push_back(c);
    return res;
}
int main()
{
    vector<int> nums1 = {4, 3, 2, 3, 1};
    vector<int> nums2 = {2, 2, 5, 2, 3, 6};
    vector<int> res = findIntersectionValues(nums1, nums2);
    for (auto r : res)
    {
        cout << r;
    }
}
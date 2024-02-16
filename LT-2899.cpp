#include <iostream>
#include <vector>
#include <string>
using namespace std;

// vector<int> lastVisitedIntegers(vector<string> &words)
// {
//     vector<int> nums;
//     vector<int> ans;
//     int temp, k=0;
//     for (auto i = 0; i < words.size(); i++)
//     {
//         try
//         {
//             temp = stoi(words[i]);
//             nums.insert(nums.begin(), temp);
//             k = 0;
//         }
//         catch (const invalid_argument &e)
//         {
//             if(k<nums.size()){
//                 ans.push_back(nums[k++]);
//             }
//             else{
//                 ans.push_back(-1);
//             }
//         }

//     }
//     return ans;
// }

vector<int> lastVisitedIntegers(vector<string> &words)
{
    vector<int> nums;
    vector<int> ans;
    int temp, k = 0;
    for (const string &word : words)
    {
        if (word == "prev"){
            if(k<nums.size()) ans.push_back(nums[k++]);
            else ans.push_back(-1);
        }
        else{
            k=0;
            nums.insert(nums.begin(),stoi(word));
        }
    }
    
    return ans;
}
int main()
{
    vector<string> words = {"1", "2", "prev", "prev", "prev"};
    vector<int> ans = lastVisitedIntegers(words);
    for (auto i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}

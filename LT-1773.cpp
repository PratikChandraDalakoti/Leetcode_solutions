#include <iostream>
#include <vector>
using namespace std;
int countMatches(vector<vector<string>> &items, string ruleKey, string ruleValue)
{
    int index, res = 0;
    if (ruleKey == "type"){
        index = 0;
    }
    else if (ruleKey == "color"){
        index = 1;
    }
    else{
        index = 2;
    }
    
        for (const auto &item : items)
        {
            if (item[index] == ruleValue) 
                res++;

        }
    return res;
}
int main()
{
    vector<vector<string>> items = {{"phone","blue","pixel"},{"computer","silver","lenovo"},{"phone","gold","iphone"}};
    string ruleKey = "color";
    string ruleValue = "silver";
    int res = countMatches(items, ruleKey, ruleValue);
    cout << res;

}
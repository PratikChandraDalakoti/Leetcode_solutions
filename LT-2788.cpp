#include <iostream>
#include <vector>
using namespace std;

vector<string> splitWordsBySeparator(vector<string> &words, char separator)
{
    vector<string> res;
    string temp;
    for (const string &word : words)
    {
        for (auto i = 0; i < word.size(); i++)
        {
            if (word[i] == separator){
                if(temp != "")
                {
                    res.push_back(temp);
                temp = "";
                }
                }
            else{
                temp += word[i];
            }
        }
        if(temp != "")
                {
                    res.push_back(temp);
                temp = "";
                }
        
    }
    return res;
}
int main()
{
    vector<string> words = {"|||"};
    vector<string> res = splitWordsBySeparator(words, '|');
    for(const string &result: res){
        cout << result << "\n";
    }
    return 0;
}
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
        
        sort(strs.begin(),strs.end());
        // for(const string&str:strs)
        //     cout << str;
        int min_length = strs[0].size();
        string temp = "";
        for(auto i = 0;i<min_length;i++){
            if(strs[0][i] == strs[strs.size()-1][i]){
                temp += strs[0][i];
            }
            else{
                return temp;
            }
        }
        return temp;
}

int main(){
    vector<string> strs = {"flower","flow","flight"};
    string res = longestCommonPrefix(strs);
    cout << res;
}
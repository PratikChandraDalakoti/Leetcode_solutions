#include<iostream>
#include<vector>
using namespace std;
int countPrefixes(vector<string>& words, string s) {
        int i,j,c = 0;
        for(const auto &word:words){
                if (word == s.substr(0,word.size())) c++;
        }
        return c;
}
int main(){
    vector<string> words = {"a","a", "b","c","ab","bc","abc"};
    string s = "aa";
    int res = countPrefixes(words, s);
    cout << res;
}
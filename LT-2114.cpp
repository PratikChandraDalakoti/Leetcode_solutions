#include<iostream>
#include<vector>
using namespace std;

int mostWordsFound(vector<string>& sentences) {
        int c, res = 0;
        for(const auto&words: sentences){
            c = 0;
            for(const auto &letter:words){
                if(letter == ' ') c++;

            }
            c++;
            if(res < c) res = c;
        }
        return res;
    }
int main(){
    vector<string> sentences = {"alice and bob love leetcode", "i think so too", "this is great thanks very much"};
    int res = mostWordsFound(sentences);
    cout << res;
}
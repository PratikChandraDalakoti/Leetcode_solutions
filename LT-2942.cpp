#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector<int> findWordsContaining(vector<string> &word,  char x){
    vector<int> res;
    for(auto i = 0; i<word.size();i++){
        int j = 0;
        string ptr = word[i];
        while(j < ptr.size()){
            if(ptr[j] == x){
                res.push_back(i);
                break;
            }
            j++;
        }
    }
    return res;
    
}
int main(){

vector<string> ne = {"leet", "code"};
vector<int> res = findWordsContaining(ne, 'e');
// for(auto i = 0; i<ne.size();i++){
//     cout << ne[i] << "\n";
// }
// for(auto i = 0; i<res.size();i++){
//     cout << res[i] << "\n";
// }
}
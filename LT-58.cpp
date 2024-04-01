#include<iostream>
#include<vector>
using namespace std;
int lengthOfLastWord(string s) {
        int i=s.size()-1, c=0, flag = 0;
        while(i>=0){
            if(s[i] != ' ') {
                flag = 1;
                c++;
            }
            else if(flag){
                break;
            }
                
            i--;
            }
        
        return c;
    }
int main(){
    string s="a";
    int res = lengthOfLastWord(s);
    cout << res;
}
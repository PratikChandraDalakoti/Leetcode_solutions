#include<iostream>
#include<vector>
using namespace std;

int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;
        for(const auto&operation: operations){
            if(operation[1] == '+'){
                x = x + 1;
            }
            else {
                x= x-1;
            }
        }
        return x;
    }

    int main(){
        vector<string> operation = {"--X","X++","X++"}   ;
        int res = finalValueAfterOperations(operation);
        cout << res;
    }
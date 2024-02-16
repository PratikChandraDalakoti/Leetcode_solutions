#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
    vector<string> ne = {"test", "hello", "lol"};
    int flag = 1;
    for(auto i = 0;i< ne.size();i++){
        flag = 1;
        cout << ne[i] << "1\n";
        string ptr = ne[i];
        size_t size = ptr.size();
        for(auto j=0; j<= size/ 2; j++){
            if(ptr[j] != ptr[size-j-1]){
                flag = 0;   
            }
            cout << "flag = " << flag << "\n";
            cout << ptr[j] << " " << ptr[size-j-1] <<" ";
        }
        cout << "\n";
        cout << flag;
        if(flag == 1){
            cout << "It's a palindrome";
        }
        else{
            cout<< " Not a palindrome";
        }
    
    // cout << *ne.begin();
    // cout << *ne.end();

    }

}
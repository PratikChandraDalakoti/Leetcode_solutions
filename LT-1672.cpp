#include<iostream>
#include<vector>
using namespace std;
int maximumWealth(vector<vector<int>>& accounts) {
       int i,j,sum, max = -1;
       for(i=0;i<accounts.size();i++){
        sum = 0;
        for(j=0;j<accounts[i].size();j++){
            sum+=accounts[i][j];
        }
        if(max < sum) max = sum;
       } 
       return max;
    }
int main(){
    vector<vector<int>> accounts = {{1,2,3},{3,2,1}};
    int res = maximumWealth(accounts);
    cout << res;
}
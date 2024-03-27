#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int sumOddLengthSubarrays(vector<int>& arr) {
        int res = 0;
        for(int i=0;i<arr.size();i++){
            int count = ceil((i+1) * (arr.size()-i) / 2.0);
            res += count * arr[i];
        }
        return res;
    }
int main(){
    vector<int> arr = {1,4,2,5,3 };
    int res = sumOddLengthSubarrays(arr);
    cout << res;
}
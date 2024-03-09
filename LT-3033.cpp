#include <iostream>
#include <vector>
#include<map>
#include <utility>
using namespace std;

int main()
{   map< pair<int,int>, int> mp;
    int rows=3, col=3;
    int max;
    int index_row = 0, index_col = 0;
    vector<vector<int>> matrix = {{1, 5, 3}, {4, 3, 6}, {7, 1, 9}};
    vector<int> col_max;
    for (auto i =0;i<rows;i++)
    {for(auto j=0;j<col;j++){
        max = matrix[0][i];
        if(max < matrix[j][i]){
            max = matrix[j][i];
            index_row = j;
            index_col = i;
            cout << max << "\n";
        }
        
    }
    mp[{index_row, index_col}] = max;
    index_col = 0;
    }
    for(const auto &i:mp){
        cout << "Index: (" << i.first.first << ", " << i.first.second << "), Value: " << i.second << std::endl;
    }
}

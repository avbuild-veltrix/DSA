#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {6, 7, 8},
        {11, 12, 13}
    };
    int n = matrix.size();
    vector<vector<int>> ans(n, vector<int>(n));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            ans[j][n-i-1] = matrix[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}
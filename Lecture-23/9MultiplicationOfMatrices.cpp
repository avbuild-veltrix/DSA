#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> A = {
    {1, 2, 3},
    {4, 5, 6}
    };

    vector<vector<int>> B = {
    {9, 8, 7, 5},
    {6, 5, 4, 3},
    {3, 2, 1, 8}
    };

    int r = A.size();
    int c = B[0].size();
    vector<vector<int>> res(r, vector<int>(c,0));

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            for(int k = 0; k < A[0].size(); k++){
                res[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
}
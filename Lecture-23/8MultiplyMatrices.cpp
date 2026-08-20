#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> A = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
    };

    vector<vector<int>> B = {
    {9, 8, 7},
    {6, 5, 4},
    {3, 2, 1}
    };

    vector<vector<int>> arr(A.size(), vector<int>(B.size()));
    for(int i = 0; i < A.size(); i++){
        for(int j = 0; j < B.size(); j++){
            //arr[i][j] = A[i][j]
            for(int k = 0; k < B.size(); k++){
                arr[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    for(int i = 0; i < arr.size(); i++){
        for(int j = 0; j < arr.size(); j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

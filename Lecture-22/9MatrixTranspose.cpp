#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> arr = {{1, 2, 3},{6, 7, 8},{11, 12, 13},{16, 17, 18}};
    int r = arr.size();
    int c = arr[0].size();
    vector<vector<int>> ans(r, vector<int>(c));
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(i > 1){
                cout<<arr[i][j]<<"  ";
            }else{
                cout<<arr[i][j]<<"   ";
            }
        }
        cout<<endl;
    }
}
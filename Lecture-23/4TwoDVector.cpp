#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> arr = {{1,2,3,4},{3,4},{4,5,6},{6,7,8,9,0}};
    int n = arr.size();
    for(int i = 0; i < n; i++){
        for(int j = 0; j < arr[i].size(); j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
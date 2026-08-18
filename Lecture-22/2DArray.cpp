#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> arr1 = {{1,2,3,4},{3,4,5,6},{5,6,7,8}};
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<endl;
    int arrr1[3][4] = {{1,2,3,4},{3,4,5,6},{5,6,7,8}};
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            cout<<arrr1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<endl;
    vector<vector<int>> arr2 = {{1,2,3,4},{3,4,5,6},{5,6,7,8}};
    for(int j = 0; j < 4; j++){
        for(int i = 0; i < 3; i++){
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<endl;
    int arrr2[3][4] = {{1,2,3,4},{3,4,5,6},{5,6,7,8}};
    for(int j = 0; j < 4; j++){
        for(int i = 0; i < 3; i++){
            cout<<arrr2[i][j]<<" ";
        }
        cout<<endl;
    }
}
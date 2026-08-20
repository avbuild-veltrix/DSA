#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> a = {1,2,3,4};
    vector<int> b = {1,2};
    vector<int> c = {1,2,3};
    vector<int> d = {1};
    
    vector<vector<int>> arr;  // Jagged Array.
    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);
    arr.push_back(d);

    for(int i = 0; i < arr.size(); i++){
        for(int j = 0; j < arr[i].size(); j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
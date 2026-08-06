#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr(9);
    for(int i = 0; i < arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    arr.push_back(7);
    for(int i = 0; i < arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}
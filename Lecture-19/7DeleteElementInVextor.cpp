#include<bits/stdc++.h>
using namespace std;
int main(){
    vector <int> arr(5);
    for(int i = 0; i < arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    arr.push_back(8);
    arr.pop_back();
    for(int i = 0; i < arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}
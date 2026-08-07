#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);
    arr.pop_back();
    arr.pop_back();
    arr.push_back(8);
    for(int i = 0; i < arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<arr.capacity();
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr = {2,5,3,9,6,4,1};
    sort(arr.begin(), arr.end());
    cout<<"Sorting Elemet : ";
    for(int i : arr){
        cout<<i<<" ";
    }
    cout<<endl<<"Reverse Sorting : ";
    reverse(arr.begin(), arr.end());
    for(int i : arr){
        cout<<i<<" ";
    }
}
// Reverse of bubble sort means smallest element is comes first in the first pass.
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr = {2,4,1,7,5,3,6};
    int n = arr.size();
    for(int ele : arr){
        cout<<ele<<" ";
    }
    cout<<endl;
    for(int i = 0; i < n-1; i++){
        bool swaps = false;
        for(int j = n-1; j > i; j--){
            if(arr[j] < arr[j-1]){
                swap(arr[j], arr[j-1]);
                swaps = true;
            }
        }
        if(!swaps){
            break;
        }
    }
    for(int ele : arr){
        cout<<ele<<" ";
    }
}
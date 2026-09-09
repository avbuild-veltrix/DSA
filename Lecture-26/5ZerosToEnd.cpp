#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr = {3,0,-1,0,7,0,-5,0,3,5,2,0};
    int n = arr.size();
    for(int i = 0; i < n-1; i ++){
        bool swaps = false;
        for(int j = 0; j < n-1-i; j++){
            if(arr[j] == 0){
                swap(arr[j],arr[j+1]);
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
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr = {2,5,1,7,9,4,0,6,3,8};
    int n = arr.size();
    for(int i = 0; i < n-1; i++){
        int minIndex = i;
        for(int j = i+1; j < n; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
    for(int ele : arr){
        cout<<ele<<" ";
    }
}
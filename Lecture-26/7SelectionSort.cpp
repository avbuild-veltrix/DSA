#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr = {3,6,9,4,5,8,2,0,1,7};
    for(int ele : arr){
        cout<<ele<<" ";
    }
    cout<<endl;
    int n = arr.size();
    for(int i = n-1; i > 0; i--){
        int maxIndex = i;
        for(int j = 0; j < i; j++){
            if(arr[maxIndex] < arr[j]){
                maxIndex = j;
            }
        }
        swap(arr[i], arr[maxIndex]);
    }
    for(int ele : arr){
        cout<<ele<<" ";
    }
}
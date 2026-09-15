// Binary search in an array which is sorted in decreasing order.

#include<bits/stdc++.h>
using namespace  std;
int main(){
    vector<int> values = {90, 80, 70, 60, 50, 40, 30, 20, 10};
    int high, low, mid, target;
    low = 0; 
    high = values.size()-1;
    cin>>target;
    while(low <= high){
        mid = (low + high)/2;
        if(values[mid] > target){
            low = mid+1;
        }else if(values[mid] < target){
            high = mid-1;
        }else{
            cout<<"The values found at index : "<<mid;
            return 0;
        }
    }
    cout<<"Element is not present in the array.";
    return 0;
}
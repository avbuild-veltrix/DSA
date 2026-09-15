#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> values = {10, 20, 20, 20, 30, 30, 40, 50, 50, 60};
    int low, high, mid, target;
    cout<<"Enter the target : ";
    cin>>target;
    vector<int> ans(2,-1);
    low = 0;
    high = values.size() - 1;

    // First Occurance.
    while(low <= high){
        mid = (low + high)/2;
        if(values[mid] < target){
            low = mid + 1;
        }else if(values[mid] > target){
            high = mid - 1;
        }else{
            ans[0] = mid;
            high = mid - 1;
        }
    }
    // Last Occurance.
    low = 0;
    high = values.size() - 1;
    while(low <= high){
        mid = (low + high)/2;
        if(values[mid] < target){
            low = mid + 1;
        }else if(values[mid] > target){
            high = mid - 1;
        }else{
            ans[1] = mid;
            low = mid + 1;
        }
    }
    cout<<"Element found at index : ";
    for(int ele : ans){
        cout<<ele<<" ";
    }
    return 0;
}
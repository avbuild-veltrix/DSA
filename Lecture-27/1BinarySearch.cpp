#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> values = {20, 30, 40, 50, 60, 70, 80};
    int mid, high, low, target;
    cout<<"Enter the target element : ";
    cin>>target;
    high = values.size()-1;
    low = 0;
    while(low <= high){
        mid = (low + high)/2;
        if(values[mid] > target){
            high = mid-1;
        }else if(values[mid] < target){
            low = mid+1;
        }else{
            cout<<"Element found at index: "<<mid;
            return 0;
        }
    }
    cout << "Element not found";

    return 0;
}

//Time complexity of Binary Search is logn.
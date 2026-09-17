// You are given an integer mountain array arr of length n where the values increase to a peak element and then decrease.
// Return the index of the peak element. Using binary search algorithm.

#include<bits/stdc++.h>
using namespace std;

int mountain(vector<int> &peak){
    int n = peak.size();
    int high = n - 1;
    int low = 0;
    while(low < high){
        int mid = (low + high)/2;
        if(peak[mid] < peak[mid+1]){
            low = mid + 1;
        }else{
            high = mid;
        }
    }
    return low;
}

int main(){
    vector<int> peak = {1,2,6,9,34,74,300,24,22,0};

    cout<<"Peak index of mountain will be : "<<mountain(peak);
}
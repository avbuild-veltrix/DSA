// You are given a sorted array consisting of only integers where every element appears exactly twice, except for one element which appears exactly once.
// Return the single element that appears only once.

#include<bits/stdc++.h>
using namespace std;

int element(vector<int> &array){
    int n = array.size();
    int high = n-1;
    int low = 0;
    int ans = 0;
    while(low < high){
        int mid = low + (high - low)/2;
        if(mid % 2 == 1){
            mid--;
        }
        if(array[mid] == array[mid+1]){
            low = mid+2;
        }else{
            high = mid;
        }
    }
    return array[low];
}

int main(){
    vector<int> array = {1,1,2,2,3,3,4,4,8,8,9};
    cout<<"The element that appeared only one time is : "<<element(array);
}
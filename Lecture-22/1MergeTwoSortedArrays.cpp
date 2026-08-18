#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& nums1, vector<int>& nums2) {

    int m = nums1.size();
    int n = nums2.size();
    vector<int> arr(m+n);
    int i = 0, j = 0, k = 0;
    while(i < m && j < n){
        if(nums1[i]<nums2[j]){
            arr[k] = nums1[i];
            i++;
        }else{
            arr[k] = nums2[j];
            j++;
        }
        k++;
    }
    while(i<m){
        arr[k] = nums1[i];
        i++;
        k++;
    }

    while(j<n){
        arr[k] = nums2[j];
        j++;
        k++;
    }
    for(int x : arr) {
        cout << x << " ";
    }
}


int main(){
    vector<int> nums1 = {1,2,3,7,8,11,13,15,17,19};
    vector<int> nums2 = {4,5,6,9,10,12,14,16,18,20};
    merge(nums1, nums2);

    return 0;
}
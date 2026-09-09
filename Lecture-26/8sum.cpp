// Find the pair of element whose sum is equal to the target.
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr = {2,4,6,23,1,5,6,1,76,14};
    int target;
    cout<<"Enter the target : ";
    cin>>target;
    int n = arr.size();
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(arr[i] + arr[j] == target){
                cout<<"Indices are : "<<i<<" and "<<j<<endl;
                cout<<"And the sum of element i.e. "<<arr[i]<<" and "<<arr[j]<<" is equal to the target i.e. "<<target;
            }
        }
    }
    return -1;
}
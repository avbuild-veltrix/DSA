#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {2,32,12,5,523,651,153,-6451,1,35,3565};
    int size = sizeof(arr)/sizeof(arr[0]);
    int min = arr[0];
    for(int i = 0; i < size; i++){
        if(min > arr[i]){
            min = arr[i];
        }
    }
    cout<<"Minimum element in the array is "<<min;
}
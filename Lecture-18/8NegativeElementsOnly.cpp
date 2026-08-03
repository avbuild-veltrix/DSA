// Take the size of array as input and then again take elements of array as input then print only negative elements of array
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter array size = ";
    cin>>n;
    int arr[n];
    cout<<"Elements of array = ";
    for(int i = 0; i < n; i++){
        cin>>arr[i];

    }
    for(int i = 0; i < n; i++){
        if(arr[i]<0){
            cout<<arr[i]<<" ";
        }
    }

}
// Sum of elements of array.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter array size = ";
    cin>>n;
    int arr[n];
    cout<<"Elements of array = ";
    for(int i = 0; i < n; i++){
        cin>>arr[i];

    }
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    cout<<sum;

}
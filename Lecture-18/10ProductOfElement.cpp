#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, product=1;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n]={};
    cout<<"Enter the elements of array : ";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    for(int i = 0; i < n; i++){
        product *= arr[i];
    }
    cout<<product;
}
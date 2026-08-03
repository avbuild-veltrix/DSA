#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {2,32,42,54,75,23,67,22,3,76,34,5,76,33,23,45,56,34,76,87};
    int size = sizeof(arr)/sizeof(arr[0]);
    int max = arr[0];
    int smax = INT_MIN;
    for(int i = 0; i < size; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    for(int i = 0; i < size; i++){
        if((smax < arr[i])&&(arr[i] != max)){
            smax = arr[i];
        }
    }
    cout<<"Maximum number is "<<max<<endl;
    cout<<"Second maximum number is "<<smax<<endl;
}
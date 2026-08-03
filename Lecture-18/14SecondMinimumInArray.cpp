#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {2,3,43,45,23,87,45,23,76,23,45,24,55,23,76,42,23};
    int min = arr[0];
    int smin = INT_MAX;
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < size; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    for(int i = 0; i < size; i++){
        if((arr[i] < smin)&&(arr[i] != min)){
            smin = arr[i];
        }
    }
    cout<<"Minimum Number is "<<min<<endl;
    cout<<"Second minimum number is "<<smin<<endl;
}
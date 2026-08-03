#include<bits/stdc++.h>
using namespace std;
int main(){
    //1. Fixed-size array (most common)
    int arr1[4] = {1,2,3,4};

    // 2. Declare and initialize
    int arr2[5] = {10, 20, 30, 40, 50};

    // 3.Partial initialization
    int arr3[5] = {10, 20};

    // 4. Initialize all elements to zero
    int arr4[5] = {};
    // OR
    int arr5[5] = {0};

    // 5.Using constexpr
    constexpr int n = 10;
    int arr[n];

    cout<<arr1[1]<<endl;
    cout<<arr5[3]<<endl;
    cout<<arr4[3]<<endl;

}
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector <int> arr; //Empty vector >> Zero Size, Zero Capacity.
    for(int i = 0; i < 10; i++){
        arr.push_back(i);
    }
    cout<<arr.size()<<endl;
    for(int i = 0; i < 10; i++){
        cout<<arr[i]<<" ";
    }
}
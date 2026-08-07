#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr(7);
    cout<<arr.size()<<" "<<arr.capacity()<<endl;
    arr.push_back(9);
    cout<<arr.size()<<" "<<arr.capacity();
}
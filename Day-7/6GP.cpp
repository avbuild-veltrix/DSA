#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the count of numbers ";
    cin>>num;
    // cout<<"Enter the value of geometric coefficient ";
    // cin>>r;

    int r = 1;
    for(int i = 1; i <= num; i++){
        cout<<r<<" ";
        r *= 2;
    }
}
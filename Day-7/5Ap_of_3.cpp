#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number ";
    cin>>num;

    for(int i = 1; i<=3*num-1;i+=3){
        cout<<i<<" ";
    }
}
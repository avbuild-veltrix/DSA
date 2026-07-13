#include<iostream>
using namespace std;
int main(){
    int x, count = 0;
    cout<<"Enter the number ";
    cin>>x;
    if(x==0){
        cout<<"Number of digits = 1";
    }else{
        while(x != 0){
        x/=10;
        count++;
    }
    cout<<"Number of digits = "<<count;
    }

    // while(x>0){
    //     x/=10;
    //     count++;
    // }
    // cout<<count;
}